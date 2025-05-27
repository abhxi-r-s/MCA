#include<stdio.h>
void main()
{ int n,a[20][20],v[20];
    printf("Enter the number of nodes :");
    scanf("%d",&n);

    printf("Enter the adjacency matrix :");
    for(int i=0;i<n;i++)
    {
        v[i]=0;
        for(int j=0;j<n;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    printf("Topological Sort \n");
    for(int i=0;i<n;i++)
    {
        int c=0;
        if(v[i]!=1)
        {
            for(int j=0;j<n;j++)
            {
                if(a[i][j]!=0)
                {
                    c=1;
                    break;
                }
            }
            if(c==0)
            {
                    v[i]=1;
                    printf("%d",i);
                    for(int j=0;j<n;j++)
                    a[i][j]=0;
                    i=-1;
                
            }
        }

    }
}