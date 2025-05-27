#include<stdio.h>
#define n 100
void main()
{
    int size,a[n],value,pos,del,ans,search,temp;
    printf("Enter the size of the array :");
    scanf("%d",&size);
    if(size>n)
    {
        printf("Overflow");
    }
    else
    {
    printf("Enter the array elements :");
    for(int i=0;i<size;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("Array elements :");
    for(int i=0;i<size;i++)
    {
        printf("%d \t",a[i]);
    }
    }
    //insertion
do{
    printf("Enter the element and position to insert the element :");
    scanf("%d %d",&value,&pos);
    size++;
    for(int i=size-1;i>=pos-1;i--)
    {
        a[i+1]=a[i];

    }
    a[pos-1]=value;

    printf("The new array is :");
    for(int i=0;i<size;i++)
    {
        printf("%d \t",a[i]);
    }

    //Deletion

    printf("Enter the position element has to be deleted :");
    scanf("%d",&del);

    for(int i=del-1;i<=size;i++)
    {
        a[i]=a[i+1];
    }
    size--;

    printf("The new array is :");
    for(int i=0;i<size;i++)
    {
        printf("%d \t",a[i]);
    }
    printf("Do you want to insert and delete more ! 0/1");
    scanf("%d",&ans);

    //SEARCHING

    printf("Enter the element to be searched :");
    scanf("%d",&search);

    for(int i=0;i<size;i++)
    {
        if(a[i]==search)
        {
            printf("%d found at position %d",search,i+1);
        }
    }

    // sorting
    for(int i=0;i<size-1;i++)
    {
        for(int j=0;j<size;j++)
        {
            if(a[j]>a[j+1])
            {
                temp=a[j+1];
                a[j+1]=temp;
                a[j]=temp;
            }
        }
    }
   
}while(ans!=0);

  
    
}