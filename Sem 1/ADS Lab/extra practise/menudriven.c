#include<stdio.h>
void Fact(int n1);
void Sum(int n1);
void Prime(int n1);
void main()
{
    int a,b,num;
    //printf("Enter two numbers : ");
    //scanf("%d %d",&a,&b);

    printf("MENU\n");
    printf("_ _ _\n");
    printf("1.Factorial\n");
    printf("2.Sum of Digits\n");
    printf("3.Prime or not\n");
    printf("4.Exit\n\n");

    printf("Enter the choice : \t");
    scanf("%d",&num);

    switch (num)
    {
    case 1:printf("Enter the number : ");
           scanf("%d",&a);
           Fact(a);
           break;
    case 2 :printf("Enter the Digit : ");
           scanf("%d",&a);
           Sum(a); 
           break;
    case 3 :printf("Enter the Digit : ");
           scanf("%d",&a);
           Prime(a);  
           break;           
    case 4:printf("\nExited");
           break;
    default:printf("Enter a valid choice\n");
           break;
    }
}
void Fact(int n1)
{
    int fact=1;
    for(int i=1;i<=n1;i++)
    fact*=i;
    printf("factorial is : %d",fact);
}
void Sum(int n1)
{ int rem,ans=0;
    while(n1>0)
    {
    rem=n1%10;
    ans+=rem;
    n1=n1/10;
    }

    printf("Sum of digits is : %d",ans);
    
}
void Prime(int n1)
{ 
    int flag=0;
    if(n1==1||n1==0)
        flag=1;
    for(int i=2;i<=n1/2;i++)
    {
        if(n1%i==0)
        flag=1;
        break;
    }

    if(flag==1)
    printf("%d is not a prime number\n ",n1);
    else
    printf("%d is a prime number\n",n1);
}