#include<stdio.h>
void main()
{
    int a[10][10],b[10][10],m[10][10],i,p,k,j,q,r,s;

    printf("Enter the row and column of first matrix : \n");
    printf("Row :\t");
    scanf("%d",&p);
    printf("Column :\t");
    scanf("%d",&q);

    printf("Enter the row and column of second matrix : \n");
    printf("Row :\t");
    scanf("%d",&r);
    printf("Column :\t");
    scanf("%d",&s);

    if(q==r)
    {
        printf("Enter the values of first matrix :\n");
        for(i=0;i<p;i++)
        {
            for(j=0;j<q;j++)
            {
                scanf("%d",&a[i][j]);
            }
        }
        printf("Enter the values of second matrix :\n");
        for(i=0;i<r;i++)
        {
            for(j=0;j<s;j++)
            {
                scanf("%d",&b[i][j]);
            }
        }
         for(i=0;i<p;i++)
        {
            for(j=0;j<s;j++)
            {
                m[i][j]=0;
            }
        }
        for(i=0;i<p;i++)
        {
            for(j=0;j<s;j++)
            {
                for(k=0;k<r;k++)
                {
                    m[i][j]+=a[i][k]*b[k][j];
                }
            }
        }
     
     printf("The resultant matrix is :\n");
     for(i=0;i<p;i++)
     {
        for(j=0;j<s;j++)
        {
            printf("%d \t",m[i][j]);
        }
        printf("\n");
     }
    }

else
printf("\n Matrix multiplication is not possible ");


}