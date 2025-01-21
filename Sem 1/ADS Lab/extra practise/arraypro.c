//Increment every element by 1.
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
        a[i]+=1;
    }
    printf("Array after incrementing :\n");
    for(i=0;i<n;i++)
    {
       printf("%d\n",a[i]);
    }


}
