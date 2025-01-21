#include<stdio.h>
void main()
{
    int arr[10],large=0,n,i;
    printf("Enter the array limit :");
    scanf("%d",&n);

    printf("Enter the array elements :");
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
        if(arr[i]>large)
        {
            large=arr[i];
        }
    }
    printf("Largest element is %d",large);
}