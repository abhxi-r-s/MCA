#include<stdio.h>
void main()
{

int marks=0,check=0;

printf("Enter the marks obtained : ");
scanf("%d",&marks);

check=marks/10;

switch(check)
{
    case 10 :
    case  9 :
    case  8 : printf("\nFirst class with distinction ");
            break;
    case  7 :
    case  6 :printf("\nFirst class");
            break;
    case  5 :
    case  4 :printf("\nPassed");      
            break;
    case 3:
    case 2:
    case 1:
    case 0:printf("\nfailed ");
    break;
    default : printf("\nEnter valid number ");          
}

}