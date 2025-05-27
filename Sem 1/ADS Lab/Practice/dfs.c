
#include<stdio.h>
int V[20],A[20][20];
int n,source;
void dfs(int node);
void main()
{   
    printf("Enter the number of nodes :");
    scanf("%d",&n);

    printf("Enter the adjacency matrix :");
    for(int i=0;i<n;i++)
    {   V[i]==0;
        for(int j=0;j<n;j++)
        {
            scanf("%d",&A[i][j]);
        }
    }
    
    printf("Enter the source node :");
    scanf("%d",&source);
    if(source<0 || source>=n)
    {
        printf("Invalid entry");

    }
    else{
        printf("DFS");
        dfs(source);
    }
}
    
void dfs(int node)
{
    V[node]=1;
    printf("%d",node);

    for(int i=0;i<n;i++)
    {
        if(V[i]==0 && A[node][i]!=0)
        {
            dfs(i);
        }
    }
}