#include<stdio.h>
void main()
{
    char str[100],i=0;
    printf("Enter the string :");
    gets(str);
    printf("The String is :\t");
    puts(str);
    printf("String is :\t");
    while(str[i]!='\0')
    {
    printf("%c",str[i]);
    i++;
    }
 

}