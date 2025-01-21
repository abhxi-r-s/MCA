#include<stdio.h>
int add(int n1,int n2);
void main()
{
    int a,b,sum;
    printf("Enter the numbers :");
    scanf("%d %d",&a,&b);

    printf("Sum is %d",sum=add(a,b));

}
int add(int n1, int n2)
{
    int ans=n1+n2;
    return ans;
}