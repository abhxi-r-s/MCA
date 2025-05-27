#include<stdio.h>

int n,A[20][20],V[20],source,front=-1,rear=-1,queue[20];

void bfs(int start);
int dequeue();
void enqueue(int node);

void main()
{
    printf("Enter the number of nodes :");
    scanf("%d",&n);

    printf("Enter the Adjacency Matrix :");
    for(int i=0;i<n;i++)
    {   V[i]=0;
        for(int j=0;j<n;j++)
        {
            scanf("%d",&A[i][j]);
        }
    }
    printf("Enter the source node :");
    scanf("%d",&source);

    bfs(source);
}
void bfs(int start)
{
    printf("%d\t",start);
    V[start]=1;
    enqueue(start);

    while(front!=-1)
    {
        int node=dequeue();
        for(int i=0;i<n;i++)
        {
            if(A[node][i]!=0 && V[i]!=1)
            {
                printf("%d\t",i);
                enqueue(i);
                V[i]=1;
            }
        }
    }
}
void enqueue(int node)
{
    if(front==-1)
    {
        front=0;rear=0;

    }
    else{
        rear++;
    }
    queue[rear]=node;
}
int dequeue()
{
    int node=queue[front];
    if(front==rear)
    {
        front=-1;
        rear=-1;
    }
    else
    {
        front++;
    }
    return node;
}