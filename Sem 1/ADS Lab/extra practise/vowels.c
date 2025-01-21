#include<stdio.h>
#include<ctype.h>
#include<string.h>
void main()
{
    char str[100],ch[100];
    int i,vowel=0,consonant=0,space=0;
    printf("Enter the string :");
    gets(str);

    for(i=0;str[i]!='\0';i++)
    {
        char ch=tolower(str[i]);
        if(ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u')
        {
            vowel++;
        }
        else if(isalpha(ch))
        {
            consonant++;
        }
        else if(isspace(ch))
        {
            space++;
        }
    }

    printf("\nvowels :%d",vowel);
    printf("\nConsonants :%d",consonant);
    printf("\nSpaces : %d",space);


    
    
}    