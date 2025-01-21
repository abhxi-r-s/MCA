#include<stdio.h>
void main()
{
    int m,n,arr[10][10],brr[10][10],i,j,sum[10][10];
    printf("Enter the array limit in m*n form :\n M:");
    scanf("%d",&m);
    printf("\n N:");
    scanf("%d",&n);

    printf("Enter the first array elements :");
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            scanf("%d",&arr[i][j]);
        }
    }
    printf("Enter the second array elements :");
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            scanf("%d",&brr[i][j]);
        }
    }
    
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            sum[i][j]=arr[i][j]+brr[i][j];
        }
    }
    printf("The Sum of array elements are :\n");
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            printf("%d\t",sum[i][j]);
        }
        printf("\n");
    }
}