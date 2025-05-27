#include<stdio.h>
#include<stdlib.h>

struct node{
    struct node *prev;
    int data;
    struct node *next;
    
}*temp,*del,*del_nxt;

struct node *head=NULL,*tail=NULL;
int count=0;

void insert();
void insert_beg(int num);
void insert_end(int num);
void insert_pos(int num,int pos);
void delete();
void delete_beg();
void delete_end();
void delete_pos(int pos);
void display();


void main()
{
    int choice;
    while(choice!=4)
    {
    printf("\nMENU\n1.Insert\n2.Delete\n3.Display\n4.Exit\n");
    printf("\nEnter your choice :");
    scanf("%d",&choice);

    switch(choice)
    {
        case 1:insert();
        break;
        case 2:delete();
        break;
        case 3:display();
        break;
        case 4:
        printf("\nExiting----\n");
        break;
        default:
        printf("\nInvalid choice\n");
        break;

    }
    }
}
void insert()
{
    int choice,num,pos;
    printf("\nEnter the value to insert :");
    scanf("%d",&num);
    printf("\nINSERTION\n1.Insert at beginning\n2.Insert at end\n3.Insert at preferred position\n");
    printf("\nEnter your choice :");
    scanf("%d",&choice);

    switch(choice)
    {
        case 1:insert_beg(num);
        break;
        case 2:insert_end(num);
        break;
        case 3:
        printf("Enter the position to insert :");
        scanf("%d",&pos);
        if(pos==1)
        {
            insert_beg(num);
        }
        else if(pos<0||pos>count+1)
        {
            printf("Invalid entry...");
            
        }
        else
        {
            insert_pos(num,pos);
        }
        break;
        default:
        printf("\nInvalid option \n");
        break;
    }
}
void insert_beg(int num)
{
    struct node *newnode;
    newnode=(struct node*)malloc(sizeof(struct node));
    newnode->data=num;
    newnode->next=NULL;
    newnode->prev=NULL;
    if(head==NULL)
    {
        newnode->data=num;
        head=newnode;
        tail=newnode;
        printf("\nInsertion succesfull\n");
        count++;
    }
    else
    {
        temp=head;
        head=newnode;
        head->next=temp;
        head->prev=NULL;
        temp->prev=newnode;
        printf("\nInsertion succesfull\n");
        count++;
    }
    
}
void insert_end(int num)
{
    struct node *newnode;
    newnode=(struct node*)malloc(sizeof(struct node));
    newnode->data=num;
    newnode->next=NULL;
    newnode->prev=NULL;
    if(head==NULL)
    {
        newnode->data=num;
        head=newnode;
        tail=newnode;
        printf("\nInsertion succesfull\n");
        count++;
    }
    else
    {
        temp=tail;
        tail=newnode;
        temp->next=newnode;
        tail->prev=temp;
        count++;
        printf("\nInsertion succesfull\n");

    }
    
}
void insert_pos(int num,int pos)
{
    struct node *newnode;
    newnode=(struct node*)malloc(sizeof(struct node));
    newnode->data=num;
    newnode->next=NULL;
    newnode->prev=NULL;
    temp=head;
    for(int i=0;i<pos-2;i++)
    {
        temp=temp->next;
    }
    newnode->next=temp->next;
    temp->next=newnode;
    newnode->prev=temp;
    count++;
    printf("Insertion at position %d is successfull...!",pos);
}
void delete()
{
    int choice,pos;
    
    printf("\nDELETION\n1.Delete at beginning\n2.Delete at end\n3.Delete from preferred position\n");
    printf("\nEnter your choice :");
    scanf("%d",&choice);

    switch(choice)
    {
        case 1:delete_beg();
        break;
        case 2:delete_end();
        break;
        case 3:
        if(head==NULL)
        {
            printf("List is empty");
        }
        else if(head==tail)
        {
            temp=head;
            free(head);
            head=tail=NULL;
            printf("Element %d ,deleted successfully..",temp->data);
            count--;
        }
        else
        {
            printf("Enter the position to delete :");
            scanf("%d",&pos);
            delete_pos(pos);
        }
        
        break;
        default:
        printf("\nInvalid option \n");
        break;
    }
}
void delete_beg()
{
    if(head==NULL)
    {
        printf("\nThe list is empty\n");
    }
    else if(head==tail)
    {
        temp=head;
        head=NULL;
        tail=NULL;
        printf("\nElement %d is deleted successfully\n",temp->data);
        free(temp);
        count--;
       
    }
    else
    {
        temp=head;
        head=temp->next;
        head->prev=NULL;
        printf("\nElement %d is deleted successfully\n",temp->data);
        free(temp);
         count--;
    }
}
void delete_end()
{
    if(head==NULL)
    {
        printf("\nThe list is empty\n");
    }
    else if(head==tail)
    {
        temp=head;
        head=NULL;
        tail=NULL;
        printf("\nElement %d is deleted successfully\n",temp->data);
        free(temp);
        count--;
       
    }
    else
    {
        temp=tail;
        tail=temp->prev;
        tail->next=NULL;
        printf("\nElement %d is deleted successfully\n",temp->data);
        free(temp);
        count--;
    }
    
}
void delete_pos(int pos)
{
    
if(pos<=0||pos>count)
{
    printf("Invalid entry");
}
else if(pos==1)
{
    delete_beg();
}

else
{
    temp=head;
    for(int i=0;i<pos-2;i++)
    {
        temp=temp->next;
    }
    del=temp->next;
    temp->next=del->next;
    del_nxt=del->next;
    del_nxt->prev=temp;
    printf("Element %d ,deleted successfullyy..!",del->data);
    free(del);
    count--;
}
                
}
    

void display()
{
    if(head==NULL)
    {
        printf("\nThe list is empty..\n");
    }
    else if(head==tail)
    {
        printf("%d",head->data);
    }
    else
    {
        temp=head;
        while(temp!=NULL)
        {
            printf("\n%d",temp->data);
            temp=temp->next;
            
        }
    }

}