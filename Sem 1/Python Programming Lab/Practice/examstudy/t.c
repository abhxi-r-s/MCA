#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>

struct node
{
    int data;
    struct node *next;
};
struct node *head=NULL;
int num;


void push();
void display();
void pop();


void push()
{
    printf("\nEnter the element to be inserted : ");
    scanf("%d",&num);
    struct node *newnode=(struct node *)malloc(sizeof(struct node));
    newnode->data=num;
    struct node *temp=head;
    while(temp->next!=NULL)
    {
        temp=temp->next;
    }
    newnode->next=NULL;
    temp->next=newnode;
    printf("\nData inserted ");
    
}

void display()
{
    if(head==NULL)
    {
        printf("Stack is empty");
    }
    else
    {
        printf("\nStack elements are : ");
        struct node *temp=head;
        while(temp!=NULL)
        {
            printf("\t%d",temp->data);
            temp=temp->next;

        }
    }
}

void pop()
{
    int num;
    if(head==NULL)
    {
        printf("\nStack is empty");
    }
    else
    {
        struct node *temp=head;
        struct node *prev;
        while(temp->next!=NULL)
        {
            prev=temp;
            temp=temp->next;
            
        }
        num=temp->data;
        prev->next=NULL;
        printf("\nDeleted element is %d",num);
        

        
    }
}

void main()
{
    int choice;
    printf("\nStack using linked list");
    int flag=1;
    while(flag)
    {
        printf("\n1.push \n2.pop \n3.display \n4.exit");
        printf("\nEnter your choice : ");
        scanf("%d",&choice);
        switch(choice)
        {
            case 1:
            push();
            break;

            case 2:
            pop();
            break;

            case 3:
            display();
            break;

            case 4:
            flag=0;
            break;

            default:
            printf("\nEnter a valid option");
            break;

        }
    }
}