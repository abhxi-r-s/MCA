#include<stdio.h>
#include<conio.h>
void main()
{
    int arr[10],i;
    printf("Enter the array elements : ");
    for(i=0;i<5;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(i=0;i<5;+i++)
    {
        printf("%d\n",arr[i]);
    }
  
getch();
}