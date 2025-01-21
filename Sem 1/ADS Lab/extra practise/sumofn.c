#include<stdio.h>
int main()
{
    int i,num,sum;
    printf("Enter the limit :");
    scanf("%d",&num);

    for(i=0;i<=num;i++)
    {
        sum+=i;
    }

    printf("Sum of numbers is %d",sum);
    return 0;
}