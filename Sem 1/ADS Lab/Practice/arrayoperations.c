#include<stdio.h>

int arr[100],i,n;

void sort()
{ int temp;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<(n-1)-i;j++)
        {
            if(arr[j]>arr[j+1])
            {
                temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
            }
        }
    }
    for(int i=0;i<n;i++)
    {
        printf("%d\t",arr[i]);
    }
}

void display()
{
    for(int i=0;i<n;i++)
    {
        printf("%d\t",arr[i]);
    }
}
void reverse()
{
    for(int i=n-1;i>=0;i--)
    {
        printf("%d\t",arr[i]);
    }
}
void merge()
{
    int arr2[100]={0},n1,arr3[200],n2;
    printf("Enter the array size :");
    scanf("%d",&n1);

    printf("Enter the elements of the second array :");
    for(int i=0;i<n1;i++)
    {
        scanf("%d",&arr2[i]);
    }
    n2=n+n1;

    // for(int i=0;i<n;i++)
    // {
    //     arr3[i]=arr[i];
    // }
    // for(int i=0;i<n1;i++)
    // {
    //     arr3[i+n]=arr2[i];
    // }
    // printf("Merged array is :");
    // for(int i=0;i<n2;i++)
    // {
    //     printf("%d",arr3[i]);
    // }
    // printf("Reverse Merged array is :");
    // for(int i=n2-1;i>=0;i--)
    // {
    //     printf("%d",arr3[i]);
    // }

    for(int i=n-1;i>=0;i--)
    {
        arr3[i]=arr[i];
    }
    for(int i=n1-1;i>=0;i--)
    {
        arr3[i+n]=arr2[i];
    }
    printf("Merged array is :");
    for(int i=0;i<n2;i++)
    {
        printf("%d",arr3[i]);
    }
    printf("Reverse Merged array is :");
    for(int i=n2-1;i>=0;i--)
    {
        printf("%d",arr3[i]);
    }


}

void search()
{ int s;
    printf("Enter the element to search :");
    scanf("%d",&s);

    for(int i=0;i<n;i++)
    {
        if(s==arr[i])
        {
            printf("Element found at position %d",i+1);
        }
        else{
            printf("Not found ");
        }
    }
}
void delete()
{   
    int pos;

    printf("Enter the position  to delete :");
    scanf("%d",&pos);
    for(int i=pos-1;i<n;i++)
    {
        arr[i]=arr[i+1];
    }
    n--;
    // for(int i=0;i<n;i++)
    // {
    //     printf("%d",arr[i]);
    // }

}
void insert()
{   int num,pos;
    printf("Enter the element and position to insert :");
    scanf("%d %d",&num,&pos);
    // n++;
    
    for(int i=n;i>=pos-1;i--)
    {
        arr[i+1]=arr[i];
    }
    arr[pos-1]=num;
    n++;
    // for(int i=n-1;i>=pos;i--)
    // {
    //     arr[i]=arr[i-1];
    // }
    // arr[pos-1]=num;
    // for(int i=0;i<n;i++)
    // {
    //     printf("%d",arr[i]);
    // }

    
}
void main()
{   int ch;
    
    printf("Enter the array size:");
    scanf("%d",&n);

    if((n>100) || (n<0))
    {
        printf("Invalid size");
        printf("Re-Enter the array size:");
        scanf("%d",&n);
    }

    printf("Enter the array elements :");
    for(int i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }

    printf("\nMenu\n");
    printf("\n1.Insertion\n2.Deletion\n3.Search\n4.Reverse\n5.Display\n6.Sort\n7.Merge\n8.Exit");

    printf("Enter the choice :");
    scanf("%d",&ch);

    switch(ch)
    {
        case 1:insert();
        break;
        case 2:delete();
        break;
        case 3:search();
        break;
        case 4:reverse();
        break;
        case 5:display();
        break;
        case 6:sort();
        break;
        case 7:merge();
        break;
        // case 8:
        // break;

    }


}