#include<stdio.h>
void main()
{
    int top=-1,max,i,stack[100],ch,item,sea;
    printf("Enter the stack limit :");
    scanf("%d",&max);
    do{
    printf("\nMenu\n");
    printf("1.Push\n");
    printf("2.pop\n");
    printf("3.Display\n");
    printf("4.Search\n");
    printf("5.Exit\n");

    printf("Enter your choice :");
    scanf("%d",&ch);

    switch(ch)
    {
        case 1:
        if(top==max-1)
        {
            printf("Stack is full ");
        }
        else
        {
        printf("Enter the item :");
        scanf("%d",&item);
        top++;
        stack[top]=item;
        }
        break;

        case 2:
        if(top==-1)
        {
            printf("No elements in the stack ");
        }
        else
        {
            top--;
        }
        break;

        case 3:
        if(top==-1)
        {
            printf("\nNo element in the stack");
        }
        else
        {
        for(i=0;i<=top;i++)
        {
            printf("%d\n",stack[i]);
        }
        }
        break;

        case 4:
         if(top==-1)
        {
            printf("\nNo element in the stack");
        }
        else
        {
            printf("Enter the element to bee searched :");
        scanf("%d",&sea);
        for(i=0;i<=top;i++)
        {
            if(sea==stack[i])
            {
                printf("Element is found at position %d",i+1);
            }
            else
            {
             printf("\nElement not found\n");
            }
        }
      
        }
        break;

        case 5:
        ch=5;
        break;
        default:
        printf("->Enter a valid option<-");

    }
    }while(ch!=5);
}