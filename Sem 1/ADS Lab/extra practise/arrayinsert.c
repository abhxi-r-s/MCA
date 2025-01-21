#include<stdio.h>
void main()
{
    int arr[10],k,n,i,value;
    printf("Enter the array limit :");
    scanf("%d",&n);

    printf("Enter the array elements :");
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    printf("Enter the position where value to be inserted :");
    scanf("%d",&k);
    printf("Enter the value to be inserted :");
    scanf("%d",&value);

    for(i=n;i>=k;i--)
    {
      arr[i]=arr[i-1];//keep in mind
    }
    
    arr[k-1]=value;

    printf("The array elements are :");
    for(i=0;i<=n;i++)
    {
        printf("%d",arr[i]);
    }

    
}