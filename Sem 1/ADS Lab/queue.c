#include<stdio.h>
int Q[20],size,front,rear;

void Enqueue(int item)
{
    if(rear==size-1)
    printf("Queue is Full");
    else if(rear==-1)
    {
        front=0;
        rear=0;
        Q[rear]=item;
    }
    else
    {
     rear++;
     Q[rear]=item;
    }
}
void Dequeue()
{
    if(front==-1)
    printf("Queue is empty");
    else if(front==rear)
    {
        printf("Deleted item is %d",Q[front]);
        front=-1;
        rear=-1;
    }
    else
    {
        printf("Deleted element is %d",Q[front]);
        front++;
    }

}
void Display()
{
    int i;
    if(front==-1)
    {
        printf("Queue is empty");
    }
    else
    {
        for(i=front;i<=rear;i++)
        {
            printf("%d _",Q[i]);
        }
    }
}
void main()
{
    int item,opt,front=-1,rear=-1;
    do{
    printf("1.Insertion\n2.Deletion\n3.Display\n4.Exit\n");
    printf("Enter the option :");
    scanf("%d",&opt);

    switch(opt)
    {
        case 1:printf("Enter item to be inserted :");
               scanf("%d",&item);
               Enqueue(item);
        break;
        case 2:Dequeue();
               break;
        case 3:Display();
               break;
        case 4:break;
        default:printf("Invalid option");              
    }
    }while(opt!=4);

    

}