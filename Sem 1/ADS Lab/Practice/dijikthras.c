#include<stdio.h>
#include<stdbool.h>
int n,a[20][20],V[20],D[20],source,max=999;
void dijiksthra();
int getminvertex();
void main()
{
    printf("enter the number of nodes :");
    scanf("%d",&n);

    printf("Enter the cost adjacency matrix :");
    for(int i=0;i<n;i++)
    {
        V[i]=0;
        D[i]=max;
        for(int j=0;j<n;j++)
        {
            scanf("%d",&a[i][j]);
        }
        
    }
    printf("Enter the source node :");
    scanf("%d",&source);
    if(source<0 || source>=n)
    {
        printf("Invalid entry");
        
    }
    else{
        
        D[source]=0;
        dijiksthra();
    }

}
void dijiksthra()
{
    while (true)
    {
    int minvertex=getminvertex();
    if(minvertex==-1)
    {
        break;
    }
    else
    {
        for(int i=0;i<n;i++)
        {
            if(a[minvertex][i]!=0)
            {
                if(D[minvertex]+a[minvertex][i]<D[i])
                {
                    D[i]=D[minvertex]+a[minvertex][i];
                }
            }
        }
        V[minvertex]=1;
    }
        
    }
    printf("Minimum distance from %d to all other nodes are",source);
    for(int i=0;i<n;i++)
    {
        printf("%d->%d=%d\n",source,i,D[i]);
    }
    
   
}
int getminvertex()
{
    int minvertex=-1;
    int mindistance=max;

    for(int i=0;i<n;i++)
    {
        if(!V[i] && D[i]<mindistance)
        {
            minvertex=i;
            mindistance=D[i];
        }
    }
    return minvertex;

}