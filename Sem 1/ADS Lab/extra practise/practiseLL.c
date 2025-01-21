#include<stdio.h>
#include<stdlib.h>

struct node{
    int data;
    struct node* next;
};

int choice,num,pos;
struct node *head=NULL;

void insert(int n)
{
    int choice,pos;
    printf("Enter the element to insert :");
    scanf("%d",n);
    printf("Where do you want to insert :");
    printf("1.Insert at Beginning\n2.Insert at End\n3.Insert at any position");
    printf("Enter your choice :");
    scanf("%d",&choice);

    if(choice==1)
    {
        insert_beg(n);
    }
    else if(choice==2)
    {
        // insert_end(n);
    }
    else if(choice==3)
    {
        printf("Enter the position to insert:");
        scanf("%d",&pos);
        // insert_pos(n,pos);
    }


}
void insert_beg(int num)
{
    struct node* newnode;
    newnode=(struct node*)malloc(sizeof(struct node));
    newnode->data=num;
    newnode->next=NULL;

    if(head==NULL)
    {
        head=newnode;
    }
    else
    {
        newnode->next=head;
        head=newnode;
    }
       
}
void insert_end(int num)
{
    struct node *newnode,*temp,*current;
    newnode=(struct node*)malloc(sizeof(struct node));
    if(head==NULL)
    {
        head=newnode;
    }
    else
    {
        *temp=head;
        while(temp!=NULL)
        {
            current=temp;
            temp=temp->next;


        }

    }

}



void main()
{
    int choice=0,num;

while(choice!=4)
{
    printf("Linkedlist Operations ");
    printf("1.Insertion\n2.Deletion\n3.Display\n4.Exit");
    printf("Enter your choice:");
    scanf("%d",&choice);

    switch(choice)
    {
        case 1:printf("Enter the the number to insert :");
        scanf("%d",&num);
        insert(num);
        break;

        // case 2: Delete();
        break;

        // case 3:Dispay();
        break;

        case 4:
        printf("Exiting the program ");
        choice==4;
        break;

        default:
        printf("Invalid choice !");

    }

}
}
