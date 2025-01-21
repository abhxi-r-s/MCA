#include<stdio.h>
void main()
{
    int num,rem=0,sum=0;

    printf("Enter the number :");
    scanf("%d",&num);

    while(num>0)
    {
        rem=num%10;
        sum+=rem;
        num=num/10;
    }
printf("Sum is %d",sum);


}