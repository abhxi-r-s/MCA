#include<stdio.h>
int main()
{
    int a[10],n,i;
    printf("enter the number of elments");
    scanf("%d",&n);
    printf("enter the elements");
    for(  i=0;i<=n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=n-1;i>=0;i++)
    {
        printf("%d",a[i]);
    }
}