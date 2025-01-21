#include<stdio.h>  
#include<string.h>  
int main()
{
char str1[50], str2[50]="World";
strcpy(str1,str2);
printf("%s",str1);
return 0;
}