#include<stdio.h>
#include<string.h>

int main()
{
char str[50];
int l;
printf("Enter a string: ");
scanf("%s",str);
l=strlen(str);
printf("Length of the entered string is %d",l);
return 0;
}
