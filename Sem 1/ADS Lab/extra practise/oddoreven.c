#include<stdio.h>
void main()
{
int n;
printf("Enter the number :");
scanf("%d",&n);

if(n==100)
printf("\nThe number is 100");

else if(n<100)
{
    if(n%2==0)
    printf("\nNumber is less and 100 and its is EVEN");

    else 
    printf("\nNumber is less and 100 and its is ODD");

}

else
printf("\nThe number is greater than 100 ");

}