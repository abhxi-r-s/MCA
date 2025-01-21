
#include<stdio.h>
long int Factorial(int n1);
void main()
{
    int num,fact;
    printf("Enter the number :");
    scanf("%d",&num);

    printf("Factorial of %d is %d",num,Factorial(num));

}
long int Factorial(int n1)
{
    int temp;
    if(n1==1||n1==0)
    return 1;
    else 
    {
    temp=n1*Factorial(n1-1);
    return temp;
    }
}