#include<stdio.h>
#define size 100
int main()
{
    int a[size],n,i,choice,ele,pos,del;
    printf("enter no of elements in array:");
    scanf("%d",&n);
    printf("enter %d elements:",n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("1.Insertion\n2.Deletion\n3.Searching\n4.Sorting");
    printf("Enter your choice :");
    scanf("%d",&choice);

    switch(choice)
    {
        case 1:
        printf("Enter the element and position :");
        scanf("%d %d",&ele,&pos);
        for(i=n-1;i>=pos-1;i--)
        {
            a[i]=a[i-1];
        }
        arr[pos-1]=ele;
        n++;
        case 2:
        printf("Enter the position the element has to delete :");
        scanf("%d",&del);
        for(i=del-1;i<n;i++)
        {
            a[i]=a[i+1];
        }
        case 3:
        
    }
    }