#include <stdio.h>  
int largest(int a, int b, int c);
void main()
{
int x,y,z;
printf("Enter Three Integers : "); 
scanf("%d %d %d", &x, &y, &z);
printf("Largest = %d\n",largest(x,y,z));
}
int largest(int a, int b, int c)
{	int lar;
lar = a>b?a>c?a:c:b>c?b:c;
return lar;
}
