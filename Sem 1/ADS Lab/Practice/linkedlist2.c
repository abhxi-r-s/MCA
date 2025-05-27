#include<stdio.h>
#include<stdlib.h>

void insert_beg(int num);
void insert_end(int num);
void insert_pos(int num);
void delete_beg();
void delete_end();
void delete_pos(int pos);
void display();
void search(int a);
void insert();
void delete();

struct node{
    int data;
    struct node *next;
};
struct node *head=0,*temp,*del;
 
int count=0;

void insert()
{
    int ch,num;
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
        case 3:insert_pos(num);        
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

    if(head==0)
    {
        head=newnode;
        count++;
        printf("\n Element inserted Successfully...!");
    }
    else if(head!=0)
    {
        newnode->next=head;
        head=newnode;
        count++;
        printf("\n Element inserted Successfully...!");
    }
    

}
void insert_end(int num)
{
    struct node *newnode;
    newnode=(struct node*)malloc(sizeof(struct node));
    newnode->data=num;
    newnode->next=NULL;
    temp=head;

    if(head==0)
    {
        head=newnode;
        count++;
        printf("\n Element inserted Successfully...!");
    }
    else
    {
        while(temp->next!=NULL)
        {
            temp=temp->next;
        }
        temp->next=newnode;
        count++;
        printf("\n Element inserted Successfully...!");
    }


}
void insert_pos(int num)
{
    struct node *newnode=(struct node*)malloc(sizeof(struct node));
    newnode->data=num;
    newnode->next=NULL;
    temp=head;
    int pos;
    printf("\nEnter the position to insert :");
    scanf("%d",&pos);
    if( pos<=0 || pos>count+1)
    {
        printf("invalid position");
        
    }
    else if(pos==1||head==0)
    {
            insert_beg(num);
    }
    else
    {
       for(int i=0;i<pos-2;i++)
       {
            temp=temp->next;        
        }
        newnode->next=temp->next;
        temp->next=newnode;
        count++;
        printf("\n Element inserted Successfully...!");
    }
    

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
        if(head==0)
        {
            printf("\n No element to delete ");
        }
        else
        {
        printf("\nEnter the position to delete :");
        scanf("%d",&pos);
        if(pos>count||pos<=0)
        {
            printf("Position is invalid");
            
            
        }
        else if(pos==1)
        {
            delete_beg();
        }
        else
        {
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
    if(head==0)
    {
        printf("\nNothing to delete");
    }
    else if(head->next==NULL)
    {
        free(head);
        head=0;
    }
    else
    {
    temp=head;
    head=head->next;
    
    printf("The deleted element is %d",temp->data);
    free(temp);
    count--;
    printf("\n Element deleted Successfully...!");
    }

}
void delete_end()
{
    temp=head;
    if(head==0)
        {
            printf("\n No element to delete ");
        }
    else if(head->next==NULL)
    {
        free(head);
        head=0;
        printf("The deleted element is %d",del->data);
            count--;
            
            printf("\n Element deleted Successfully...!");
        
    }
    else
        {
            while(temp->next->next!=NULL)
                {
                    temp=temp->next;
                }
            del=temp->next;
            temp->next=NULL;
            printf("The deleted element is %d",del->data);
            count--;
            free(del);
            printf("\n Element deleted Successfully...!");
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
    count--;
    printf("The Deleted element is  %d",del->data);
    free(del);
    printf("\n Element deleted Successfully...!");
    
   


}
void search(int a)
{
    int pos=0,found=0;
    temp=head;
    while(temp!=NULL)
    {
        if(temp->data==a)
        {
            printf("\n Element %d found at position %d.\n",a,pos+1);
            found=1;
            break;
        }
        temp=temp->next;
        pos++;
    }
    if(!found){
        printf("\n Element %d not found in the list.\n",a);
    }

}
void display()
{
    temp=head;
    if(head==0)
    {
        printf("\nNo elements in the list :");
    }
    else
    {
        while(temp!=NULL)
        {
        printf("\n%d\n",temp->data);
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
        case 2:
        if(head==0)
        {
            printf("\nNo Elements to delete ");
        }
        else
        {
            
            delete();
        }
        break;
        case 3:display();
        break;
        case 4:
        if(head==0)
        {
            printf("The List is empty");
        }
        else
        {
            printf("\nEnter the element to be searched :");
            scanf("%d",&a);
            search(a);
        }
        
        break;
        case 5:printf("\nExiting........");
        break;
        default:
        printf("\nEnter a valid choice :");

    }
    }
}