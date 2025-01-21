#include<stdio.h>
#include<string.h>
void main()
{
    char str[10],str2[10];
    int check,i=0,l=0;

    printf("Enter the string :");
    scanf("%s",str);

    l=strlen(str)-1;

    while(l>=0)
    {
        str2[i]=str[l];
        l--;
        i++;
    }
    str2[i] = '\0';
    check=strcmp(str2,str);
    if(check==0)
    {
        printf("It is a palindrome");
    }
    else
    {
        printf("It is not a palindrome");
    }
}