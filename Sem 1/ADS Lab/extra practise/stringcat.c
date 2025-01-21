#include<stdio.h>
#include<string.h>
void main()
{
    char str1[10],str2[10];
    int i=0,j=0,l,b,t;

    printf("Enter the first string :");
    scanf("%s",str1);

    printf("Enter the second string :");
    scanf("%s",str2);

    l=strlen(str1)-1;
    b=strlen(str2);
    t=l+b;

    for(i=l+1;i<=t;i++)
    {
        str1[i]=str2[j];
        j++;
    }

    printf("The Concatinated string is :");
    i=0;
    while(i<=t)
    {
        printf("%c",str1[i]);
        i++;
    }


}