#include <stdio.h>
#include <stdbool.h>
int max, queue[20], op, front = -1, rear = -1, num;
bool flag = true;
void insert();
int delete();
void display();
void main()
{
    printf("\nEnter the size of the queue:");
    scanf("%d", &max);
    while (flag)
    {
        printf("\nEnter the queue operation\n1.Insertion\n2.Deletion\n3.Display\n4.Exit\n");
        scanf("%d", &op);
        switch (op)
        {
        case 1:
            insert();
            break;
        case 2:
            num = delete ();
            if (num == -1)
            {
                printf("\nQueue is empty");
            }
            else
            {
                printf("\nDeleted value=%d", num);
            }
            break;
        case 3:
            display();
            break;
        case 4:
            flag = false;
            break;
        default:
            printf("\nEnter a valid operation");
        }
    }
}
void insert()
{
    if ((rear + 1) % max == front)
    {
        printf("\nQueue is full");
    }
    else
    {
        printf("\nEnter the element to be inserted:");
        scanf("%d", &num);
        if (front == -1)
        {
            front = 0;
            rear = 0;
        }
        else
        {
            rear = (rear + 1) % max;
        }
        queue[rear] = num;
        printf("\nInsertion is successful");
    }
}
int delete()
{
    if (front == -1)
    {
        return -1;
    }
    else
    {
        num = queue[front];
        if (front == rear)
        {
            front = -1;
            rear = -1;
        }
        else
        {
            front = (front + 1) % max;
        }
        return num;
    }
}
void display()
{
    if (front == -1)
    {
        printf("\nQueue is empty");
    }
    else
    {
        printf("\nQueue elements are\n");
        if (rear >= front) // Queue has not been wrapped
        {
            for (int i = front; i <= rear; i++)
            {
                printf("%d\t", queue[i]);
            }
        }
        else
        {
            // queue has been wrapped
            //  print front to end of the queue first
            for (int i = front; i <= max - 1; i++)
            {
                printf("\t%d", queue[i]);
            }

            // then print from start from rear
            for (int i = 0; i <= rear; i++)
            {
                printf("\t%d", queue[i]);
            }
        }
    }
}
