#include<stdio.h>
void main()
{
    int a[10][10],i,j,k,r,c,row[100]={0},col[100]={0};
    printf("Enter the number of  rows and columns of the matrix :\n");
    printf("Row :\t");
    scanf("%d",&r);
    printf("\nColumn :");
    scanf("%d",&c);

    printf("Enter the elements of the matrix :\n");
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    printf("The elements of the matrix are :\n");
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            printf("%d\t",a[i][j]);
        }
        printf("\n");
    }
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            row[i]+=a[i][j];
        }
        printf("\n");
    }
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            col[i]+=a[j][i];
        }
        printf("\n");
    }


for(k=0;k<r;k++)
{
    printf("Sum of %d row is %d \n",k+1,row[k]);
}
for(k=0;k<c;k++)
{
    printf("Sum of %d column is %d \n",k+1,col[k]);
}
    
}