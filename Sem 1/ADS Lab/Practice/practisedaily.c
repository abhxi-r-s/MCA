#include<stdio.h>
#define n 100
void main()
{
    int a[n],i,j,size,temp,ele,pos,k;
    printf("Enter the array size :");
    scanf("%d",&size);

    printf("Enter the array elements :");
    for(i=0;i<size;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("enter the element and position element has to be inserted :");
    scanf("%d %d",&ele,&pos);
    
    for(i=size;i>=pos-1;i--)
    {
        a[i]=a[i-1];
    }
    a[pos-1]=ele;
    size++;
    printf("Array elements after insertion are:");
    for(k=0;k<size;k++)
    {
        printf("%d\t",a[k]);
    }

    for(i=0;i<size-1;i++)
    {
        for(j=0;j<size-1;j++)
        {
            if(a[j]>a[j+1])
            {
                temp=a[j+1];
                a[j+1]=a[j];
                a[j]=temp;
            }
        }
    }
    printf("Array elements after sorting are:");
    for(i=0;i<size;i++)
    {
        printf("%d",a[i]);
    }



}