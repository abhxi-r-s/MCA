#include<stdio.h>
void main()
{
    int m,n,arr[10][10],i,j,large=0;
    printf("Enter the array limit in m*n form :\n M:");
    scanf("%d",&m);
    printf("\n N:");
    scanf("%d",&n);

    printf("Enter the array elements :");
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            scanf("%d",&arr[i][j]);
        }
    }
    printf("The Entered array is \n");
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            printf("%d\t",arr[i][j]);
        }
        printf("\n");
    }
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            if(arr[i][j]>large)
            large=arr[i][j];
        }
        
    }
    printf("Largest element is %d :",large);
}