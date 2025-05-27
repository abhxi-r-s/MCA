#include<stdio.h>
#include<stdlib.h>

struct node
{
    int data;
    struct node *next;
};

    struct node *tail=NULL,*temp,*head=NULL,*del;
    int count=0;

void insert();
void delete();
void insert_beg(int num);
void insert_end(int num);
void insert_pos(int pos,int num);
void delete_beg();
void delete_end();
void delete_pos(int pos);
void display();
void search(int a);

void insert()
{
    int ch,num,pos;
    printf("\nEnter the value to insert :");
    scanf("%d",&num);
    printf("\nINSERTION\n1.Insert at beginning\n2.Insert at End\n3.Insert at preffered position\n");
    printf("Enter the choice :");
    scanf("%d",&ch);
    
    switch(ch)
    {
        case 1:insert_beg(num);
        break;
        case 2:insert_end(num);
        break;
        case 3:
        printf("Enter the position to  insert the element :");
        scanf("%d",&pos);   
        if(pos<0 ||pos>count+1)
        {
            printf("Invalid entry...");
        }
        else if(pos==1)
        {
            insert_beg(num);
        } 
        else
        {
            insert_pos(pos,num);
        }  
        break;
        default:
        printf("\nEnter a valid option :");
    }

}
void insert_beg(int num)
{
    struct node *newnode;
    newnode=(struct node*)malloc(sizeof(struct node));
    newnode->data=num;
    newnode->next=NULL;
    if(head==NULL)
    {
        head=newnode;
        tail=newnode;
        tail->next=head;
        count++;
        printf("Insertion successfull...");
    }
    else
    {        
        newnode->next=head;
        head=newnode;
        tail->next=head;
        count++;
        printf("Insertion successfull...!");
    }

}
void insert_end(int num)
{
    struct node *newnode;
        newnode=(struct node*)malloc(sizeof(struct node));
        newnode->data=num;
        newnode->next=NULL;

    if(head==NULL)
    {        
        head=newnode;
        tail=newnode;
        tail->next=head;
        count++;
        printf("Insertion successfull...");
    }
    else{
        newnode->next=tail->next;
        tail->next=newnode;
        tail=newnode;
        count++;
        printf("Insertion successfull...");
    }

}
void insert_pos(int pos,int num)
{
    struct node *newnode;
    newnode=(struct node*)malloc(sizeof(struct node));
    newnode->data=num;
    newnode->next=NULL;
    temp=head;
    for(int i=0;i<pos-2;i++)
    {
        temp=temp->next;
    }
    newnode->next=temp->next;
    temp->next=newnode;
    count++;
    printf("\n Element inserted Successfully...!");
}
void delete()
{
    int choice,pos;
    printf("\nDELETION \n");
    printf("\n1.Delete from beginning\n2.Delete from end\n3.Delete from preferred position\n");
    printf("Enter the choice :");
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
            printf("The list is empty...");
        }
        else{
            printf("Enter the position of the element to delete :");
            scanf("%d",&pos);
            if(pos<0||pos>count)
            {
                printf("Invalid entry..");
            }
            else if(pos==1)
            {
                delete_beg();
            }
            else if(head==tail)
            {
            temp=head;
            head=tail=NULL;
            count--;
            printf("Element %d Deleted Successfully...",temp->data);
            free(temp);
            }
            else{
                delete_pos(pos);
            }
        }
        break;
        default:
        printf("\n Enter a valid choice :\n");
    }

}
void delete_beg()
{
    if(tail==NULL)
    {
        printf("List is empty ");
    }
    else if(head==tail)
    {
        temp=head;
        head=tail=NULL;
        count--;
        printf("Element %d Deleted Successfully...",temp->data);
        free(temp);
    }
    else
    {
        temp=head;
        head=temp->next;
        tail->next=head;
        printf("Element %d Deleted Successfully...",temp->data);
        free(temp);
        count--;

    }

}
void delete_end()
{
   if(tail==NULL)
    {
        printf("List is empty ");
    }
    else if(head==tail)
    {
        temp=head;
        head=tail=NULL;
        count--;
        printf("Element %d Deleted Successfully...",temp->data);
        free(temp);
    }
    else
    {
        temp=head;
        while(temp->next->next==tail)
        {
            temp=temp->next;
        }
        temp->next=tail->next;
        printf("Element %d Deleted Successfully...",tail->data);
        free(tail);
        tail=temp;
        tail->next=head;
        count--;

    } 


}
void delete_pos(int pos)
{
    temp=head;
    for(int i=0;i<pos-2;i++)
    {
        temp=temp->next;
    }
    del=temp->next;
    temp->next=del->next;
    printf("Element %d Deleted Successfully...",del->data);
    free(del);
    count--;
}
void display()
{
    
    if(head==NULL||tail==NULL)
    {
        printf("The list is empty");
    }
    else if(head==tail)
    {
        printf("single element %d",head->data);
    }
    else
    {temp=head;

        for(int i=0;i<count;i++)
        {
            printf("%d\n",temp->data);
            temp=temp->next;
        }  
    }

}
void search(int a)
{
    if(tail==NULL)
    {
        printf("The list is empty");
    }
    
    else
    {temp=head;

        for(int i=0;i<count;i++)
        {
            if(a==temp->data)
            {
                printf("Element found at position %d",i+1);
            }
            else
            {
                printf("Element not found");
            }
            temp=temp->next;
        }  
    }

}

void main()
{
     int choice,a;
    while(choice!=5)
    {
    printf("\nMENU\n****************************\n1.Insert\n2.Delete\n3.Display\n4.Search\n5.Exit\n");
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
        case 4:printf("Enter the element to be searched :");
               scanf("%d",&a);
               search(a);        
        break;
        case 5:printf("\nExiting........");
        break;
        default:
        printf("\nEnter a valid choice :");

    }
    }


}