#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>

struct node
{
    int data;
    struct node *link;
};
struct node *head=NULL;
int choice,num ;
int nodecount=0;

void display();
void insert(int num);
void insert_beg(int num);
void insert_end(int num);
void insert_pos(int num,int pos);
void delete();
void delete_beg();
void delete_end();
void delete_pos(int pos);

void delete()
{
    int op,pos;
    printf("\n1.Deletion from beginning\n2.Deletion from end\n3.Deletion from a position");
    printf("\nEnter one op : ");
    scanf("%d",&op);
    switch(op)
    {
        case 1:
        delete_beg();
        break;

        case 2:
        delete_end();
        break;

        case 3:
        printf("\nEnter the position you want to delete : ");
        scanf("%d",&pos);
        delete_pos(pos);
        break;

        default:
        printf("\nEnter a valid option");
        break;

    }
}

void delete_beg()
{
    if(head==NULL)
    {
        printf("List is empty");

    }
    else
    {
        
        num=head->data;
        head=head->link;
        printf("\nThe element deleted is : %d",num);
        nodecount--;
        
    }
}

void delete_end()
{
    if(head==NULL)
    {
        printf("List is empty");
    }
    else if(head->link==NULL)
    {
        nodecount--;
        num=head->data;
        head=NULL;
        printf("\nThe element deleted is : %d",num);
        

    }
    else
    {
        struct node *temp=head;
        struct node *prev;

        while(temp->link!=NULL)
        {
            prev=temp;
            temp=temp->link;
        }
        num=temp->data;
        prev->link=NULL;
        nodecount--;
        printf("\nThe element deleted is : %d",num);
        

    }
}
void delete_pos(int pos)
{
    int num;
    
    if(head==NULL)
    {
        printf("\nList is empty");
        
    }
    else
    {
        struct  node *temp=head;
        struct node *current;
        for(int i=0;i<pos-1;i++)
        {
            temp=temp->link;
        }
        current=temp->link;
        num=current->data;
        temp->link=current->link;
        nodecount--;
        printf("%d is the deleted from position %d:",num,pos);
        
        
    }
}
void insert(int num)
{
    int pos;
    printf("\n1.Insertion at beginning \n2:Insertion at end \n3:Insertion at a position");
    printf("\nEnter your choice : ");
    scanf("%d",&choice);
    printf("\nEnter the value to be inserted : ");
    scanf("%d",&num);
    switch(choice)
    {
        case 1:
        insert_beg(num);
        break;

        case 2:
        insert_end(num);
        break;

        case 3:
        printf("\nEnter the position you want to insert : ");
        scanf("%d",&pos);
        insert_pos(num,pos);
        break;

        default:
        printf("\nEnter a valid choice");
        break;
    }
}

void insert_beg(int num)
{
    struct node *newnode=(struct node *)malloc(sizeof(struct node));
    newnode->data=num;
    newnode->link=head;
    head=newnode;
    nodecount++;
    printf("\nElement inserted at the beginning");
}

void insert_end(int num)
{
    struct node *temp=head;
    if(head==NULL)
    {
        insert_beg(num);
    }
    else
    {
        while(temp->link!=NULL)
        {
            temp=temp->link;
        }
        struct node *newnode=(struct node *)malloc(sizeof(struct node));
        newnode->data=num;
        newnode->link=NULL;
        temp->link=newnode;

    }
    nodecount++;
    printf("\nData inserted successfullly!");
}

void insert_pos(int num,int pos)
{
    if(head==NULL)
    {
        insert_beg(num);
    }
    else if(pos<0)
    {
        printf("\nEnter a valid position");
    }
    else
    {
        struct node *temp=head;
        for(int i=0;i<pos-1;i++)
        {
            temp=temp->link;
        }
        struct node *newnode=(struct node *)malloc(sizeof(struct node));
        newnode->data=num;
        newnode->link=temp->link;
        temp->link=newnode;
    }
    nodecount++;
    printf("\nData inserted at position : %d",pos);
}

void display()
{
    if(head==NULL)
    {
        printf("\nList is empty");
    }
    else
    {
        struct node *temp=head;
        printf("\nList elements are : ");
        while(temp!=NULL)
        {
            printf("%d\t",temp->data);
            temp=temp->link;
        }
    }
}


void main()
{
    int option;
    printf("\nLinked list operations");
    int flag=1;

    while(flag)
    {
        printf("\n1.Insertion \n2.Deletion \n3.Display \n4.Search \n5.Exit");
        printf("\nChoose Your Option : ");
        scanf("%d",&option);
        switch(option)
        {
            case 1:
            insert(num);
            break;

            case 2:
            delete();
            break;

            case 3:
            display();
            break;

            case 5:
            flag=0;
            break;

            default:
            printf("\nEnter a valid option");
            break;
        }

    }
}