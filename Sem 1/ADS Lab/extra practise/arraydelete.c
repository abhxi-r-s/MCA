#include<stdio.h>
void main()
{
    int arr[10],k,n,i,value;
    printf("Array Deletion Operation");
    printf("Enter the array limit :");
    scanf("%d",&n);

    printf("Enter the array elements :");
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    printf("Enter the position where value to be deleted :");
    scanf("%d",&k);

    i=k-1;
    while(i<=n-1)
    {
        arr[i]=arr[i+1];
        i++;
    }

    printf("The array elements are :");
    for(i=0;i<n-1;i++)
    {
        printf("%d",arr[i]);
    }
}