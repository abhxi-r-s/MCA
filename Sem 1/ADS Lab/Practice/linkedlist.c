#include<stdio.h>
#include<stdlib.h>

struct node
{
int data;
struct node *next;
}*head=NULL;

void createnode()
{
    struct node *newnode,*tail=NULL;
    newnode=(struct node*)malloc(sizeof(struct node));

    printf("Enter the value to be inserted :");
    scanf("%d",newnode->data);
    newnode->next=NULL;

    head=newnode;

    if(head==NULL)
    {
        head=newnode;
        tail=newnode;
    }
    else
    {
        tail->next=newnode;
        newnode->next=NULL;
        tail=newnode;
    }
    
}
void main()
{
    createnode();
}

