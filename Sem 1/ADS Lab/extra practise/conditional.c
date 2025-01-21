#include<stdio.h>
void main()
{

    int a,b,greatest;

    printf("Enter two numbers :");
    scanf("%d %d",&a,&b);

    greatest=(a>b)?a:b;

    printf("Greatest is %d",greatest);
}

