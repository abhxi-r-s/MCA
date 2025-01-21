#include<stdio.h>
#include<string.h>
char uppercase(char ch);
void main()
{
    char ch[50],i;
    printf("Enter the string :");
    scanf("%s",&ch);
    printf("The String is %s",ch);

    for(i=0;ch[i]!='\0';i++)
    ch[i]=uppercase(ch[i]);

    printf("The uppercased string is %s",ch);

}
char uppercase(char st)
{
    return st>='a'&&st<='z'?st-32:st;
}