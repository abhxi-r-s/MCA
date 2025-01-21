#include<stdio.h>
void main()
{

    int num,big=0,rem=0;
    printf("Enter the digit :");
    scanf("%d",&num);

    while(num>0)
    {
        rem=num%10;
        
        if(rem>big)
        {
            big=rem;
        }
        num=num/10;
    }

    printf("Biggest digit is %d",big);
}