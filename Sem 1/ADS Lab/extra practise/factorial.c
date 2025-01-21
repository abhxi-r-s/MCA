#include<stdio.h>
int main()
{
    int i,num,fact=1;
    printf("Enter the number :");
    scanf("%d",&num);

    for(i=1;i<=num;i++)
    {
        fact*=i;
    }

    printf("Factorial is %d",fact);
    return 0;
}