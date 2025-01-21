#include<stdio.h>
void main()
{

int limit,big=0,num;

printf("Enter the limit :");
scanf("%d",&limit);

printf("Enter the numbers :");
while(limit>0)
{
    scanf("%d",&num);
    if(num>big)
    {
        big=num;
    }
limit--;
}
printf("Biggest number is %d",big);
}