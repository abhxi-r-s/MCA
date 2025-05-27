#include<stdio.h>
#include<limits.h>
int n,a[20][20],parent[20],rank[20],mst[20][20],numEdge=0;
struct edge
{
int v;
int u;
int cost;
};
struct edge *getminEdge()
{
    struct edge *Edge=(struct edge*)malloc(sizeof(struct edge));
    int min=999,minweight=INT_MAX;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            if(a[i][j]!=0 && a[i][j]<min)
            {
                minweight=a[i][j];
                Edge->u=i;
                Edge->v=j;
                Edge->cost=a[i][j];
            }
        }
    }
    a[Edge->u][Edge->v]=INT_MAX;
    return Edge;

}
int find(int node)
{
    if(parent[node]==node)
    {
        return node;
    }
    else
    {
        return find(parent[node]);
    }
}
void setUnion(int u,int v)
{
    if(rank[u]>rank[v])
    {
        parent[v]=u;
    }
    else if(rank[v]>rank[u])
    {
        parent[u]=v;
    }
    else
    {
        parent[v]=u;
        rank[u]+=1;
    }
}

void main()
{
    printf("Enter the number of nodes :");
    scanf("%d",&n);

    printf("Ente the adjacency matrix :");
    for(int i=0;i<n;i++)
    {
        parent[i]=i;
        rank[i]=0;
        for(int j=0;j<n;j++)
        {
            scanf("%d",&a[i][j]);
            mst[i][j]=0;
        }
    }
    while(numEdge<n-1)
    {
        struct edge *minEdge;
        minEdge=getminEdge();
        int u=minEdge->u;
        int v=minEdge->v;

        if(find(u)!=find(v))
        {
            setUnion(u,v);
            mst[u][v]=minEdge->cost;
            numEdge++;
        }
    }
    printf("MST nodes and edges :\n");
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            if(mst[i][j]!=0)
            {
                printf("\n %d-%d is %d",i,j,mst[i][j]);
            }
        }
    }

    
}