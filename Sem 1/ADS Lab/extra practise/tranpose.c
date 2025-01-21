#include<stdio.h>
void main()
{
    int a[10][10],i,j,p,q,t[10][10]={0};
    printf("Enter the row and column of the matrix : \n");
    printf("Row :\t");
    scanf("%d",&p);
    printf("Column :\t");
    scanf("%d",&q);
    
    printf("Enter the values of the matrix :\n");
        for(i=0;i<p;i++)
        {
            for(j=0;j<q;j++)
            {
                scanf("%d\t",&a[i][j]);
            }
        }

        for(i=0;i<p;i++)
        {
            for(j=0;j<q;j++)
            {
                t[i][j]=a[i][j];
            }
        }
        printf("The transposed matrix is :\n");
        for(i=0;i<p;i++)
        {
            for(j=0;j<q;j++)
            {
                printf("%d",t[i][j]);
            }
            printf("\n");
        }
}