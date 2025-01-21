#include<stdio.h>
void main()
{
    int arr[10],i,n,big=0,pos=0;

    printf("Enter the number of elements in the array :");
    scanf("%d",&n);

    printf("enter the array elements :");
    for(i=0;i<n;i++)
    scanf("%d",&arr[i]);

    for(i=0;i<n;i++)5
    {
        if(arr[i]>big)
        {big=arr[i];
        pos=i;
        }
    }

    printf("Biggest element is %d at position %d",big,pos+1);
}