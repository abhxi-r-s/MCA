#include<stdio.h>
void main()
{
    int num,power,i,ans=1;

    printf("Enter the number and power :");
    scanf("%d %d",&num,&power);
    

    for(i=1;i<=power;i++)
    ans*=num;

    printf("Answer is %d",ans);
}