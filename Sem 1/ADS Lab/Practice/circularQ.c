#include<stdio.h>
int front=-1,rear=-1,max=0,a[100];
void main()
{
    int choice,num;
    printf("Circular Queue");
    printf("Enter the maximum size of the queue :");
    scanf("%d",&max);

    printf("Queue operations:");
    printf("\n1.Insert\n2.Delete\n3.Display\n4.Exit");
    printf("Enter the choice :");
    scanf("%d",&choice);
    switch(choice)
    {
        case 1:if((rear+1)%max==front)
            printf("Queue is fulll");
            else if(front==-1 && rear==-1)
            {
                
                
                printf("Enter the element to insert :");
                scanf("%d",&num);
                front=0;
                rear=0;
                a[front]=num;
                printf("\nInsertion is successful");
                
            }
            else{
                rear++;
                printf("Enter the element to insert :");
                scanf("%d",&num);
                a[rear]=num;
                printf("\nInsertion is successful");
                
            }
            break;
        case 2:if(front==-1 && rear==-1)
        {
            printf("Queue is empty");

        }
        else if(rear==front)
        {
            printf("Single element ");
            rear=-1;
            front=-1;
            printf("Element deleted");
        }
        else{
            front++;
            printf("Element deleted");
        }
        break;
        case 3:
        if(front==-1 && rear==-1)
        {
            printf("Queue is empty");

        }
        else if(rear==front)
        {
            printf("Single element %d",a[rear]);
            
        }
        else{
            for(int i=front;i<=rear;i++)
            {
                printf("%d",a[i]);
            }
        }

    }


}