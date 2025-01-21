#include<stdio.h>
void main()
{
    int arr[100],brr[100],merged[200],limit1,limit2,new;

    printf("Enter the first array limit :");
    scanf("%d",&limit1);

printf("Enter the elements of first array :\n");
    for(int i=0;i<limit1;i++)
    {
        scanf("%d",&arr[i]);
    }
    printf("Enter the second array limit :");
    scanf("%d",&limit2);
printf("Enter the elements of second array :\n");
    for(int i=0;i<limit2;i++)
    {
        scanf("%d",&brr[i]);
    }
new=limit1+limit2;

    for(int i=0;i<limit1;i++)
    {
        merged[i]=arr[i];
    }
    for(int i=0;i<limit2;i++)
    {
        merged[i+limit1]=brr[i];
    }
    for(int i=0;i<new;i++)
    {
        printf("%d",merged[i]);
    }

}