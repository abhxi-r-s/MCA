#include<stdio.h>
struct node {
    int data;
    struct node* next;
};
create(int n){
    int z;
    printf("enter value of z:");
    scanf("%d",&z);
    struct node* temp=(struct node*)malloc(sizeof(struct node));
    temp->data=z;
    temp->next=NULL;
    return temp;

}
int main() {
    int i,n,j;
    printf("Enter the number of elements: ");
    scanf("%d",&n);
    struct node* head = NULL;
    struct node* temp = NULL;
    struct node* last = NULL;
    for(i=0;i<=n;i++){
        // create(n);
        temp=create(n);
        if (i==1){
            head->next=temp;
        }
        else{
            create(n);
            last->next=temp;
        }
        
    }
}