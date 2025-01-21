//read and display an array of size n in reverse order

#include<stdio.h>
void main()
{
    int a[20],n,i;
    printf("Enter the array limit :");
    scanf("%d",&n);

    printf("Enter the array elements :");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("Array Elements in reverse order is :\n");
    for(i=n-1;i>=0;i--)
    {
       printf("%d\n",a[i]);
    }


}