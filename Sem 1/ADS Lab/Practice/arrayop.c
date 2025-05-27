#include<stdio.h>
#include<stdbool.h>

int n,ch;
int arr[100],arr1[100],arrm[200];
void create()
{
    printf("Enter the array elements:");
    for(int i=0;i<n;i++)
    scanf("%d",&arr[i]);

    printf("creation completed");
}
void insert()
{   int pos,ele;
    printf("Enter the position to insert :");
    scanf("%d",&pos);
    printf("Enter the element to insert :");
    scanf("%d",&ele);
    n++;
    for(int i=n-1;i>=pos-1;i--)
    {
        arr[i]=arr[i-1];
    }
    arr[pos-1]=ele;

    // for(int i=0;i<n;i++)
    // {
    //     printf("%d",arr[i]);
    // }
}
void delete()
{
    int pos;
    printf("Enter the position to delete :");
    scanf("%d",&pos);
    int x=arr[pos-1];
    for(int i=pos-1;i<n-1;i++)
    {
        arr[i]=arr[i+1];
    }
    n--;
    for(int i=0;i<n;i++)
    {
        printf("%d",arr[i]);
    }
}
void reverse()
{
    
    for(int i=n-1;i>=0;i--)
    {
        printf("%d",arr[i]);
    }
}
void merge()
{int n1;
    printf("Enter the size of the second array :");
    scanf("%d",&n1);
    printf("Enter the array elements:");
    for(int i=0;i<n1;i++)
    scanf("%d",&arr1[i]);


}
void main()
{   
    printf("Enter the size of the array :");
    scanf("%d",&n);
while(true)
{

    printf("\nArray Operations\n");
    printf("\n1.Creation\n2.Insertion\n3.Deletion\n4.search\n5.reverse\n7.Display\n6.Exit\n8.Merge\n");
    printf("enter your choice :");
    scanf("%d",&ch);

    switch(ch)
    {
        case 1:create();
        break;
        case 2:insert();
        break;
        case 3:delete();
        break;
        // case 4:search();
        // break;
        case 5:reverse();
        break;
        // case 7:display();
        // break;
        // case 6:
        // break;
        case 8:merge();
        break;
        // default:
        // printf("Enter a valid option :\n");
    }
        
}

    
}