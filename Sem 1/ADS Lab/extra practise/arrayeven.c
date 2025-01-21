#include<stdio.h>
void main()
{
    int a[20],n,i;
    printf("Enter the array limit :");
    scanf("%d",&n);
    if(n==0)
    {
        printf("Enter a valid array limit :");
        scanf("%d",&n);
    }

    printf("Enter the array elements :");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("Even numbers in array :\n");
    for(i=0;i<n;i++)
    {
        if(a[i]%2==0)
        printf("%d is even and in position : %d",a[i],i+1);
    }


}