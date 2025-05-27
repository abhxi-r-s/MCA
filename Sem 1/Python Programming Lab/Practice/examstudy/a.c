#include <stdio.h>
#include <stdlib.h>

struct node {
    int data;
    struct node *next;
};

struct node *head = NULL;

void push();
void display();
void pop();

void push() {
    int num;
    printf("\nEnter the element to be inserted: ");
    scanf("%d", &num);
    
    struct node *newnode = (struct node *)malloc(sizeof(struct node));
    if (!newnode) {
        printf("Memory allocation failed\n");
        return;
    }
    newnode->data = num;
    newnode->next = head;
    head = newnode;
    printf("Data inserted\n");
}

void display() {
    if (head == NULL) {
        printf("Stack is empty\n");
    } else {
        printf("\nStack elements are: ");
        struct node *temp = head;
        while (temp != NULL) {
            printf("%d\t", temp->data);
            temp = temp->next;
        }
        printf("\n");
    }
}

void pop() {
    if (head == NULL) {
        printf("Stack is empty\n");
    } else {
        struct node *temp = head;
        int num = temp->data;
        head = head->next;
        free(temp);
        printf("Deleted element is %d\n", num);
    }
}

int main() {
    int choice;
    printf("Stack using linked list\n");
    int flag = 1;
    while (flag) {
        printf("\n1. Push\n2. Pop\n3. Display\n4. Exit");
        printf("\nEnter your choice: ");
        scanf("%d", &choice);
        switch (choice) {
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
                flag = 0;
                break;
            default:
                printf("Enter a valid option\n");
                break;
        }
    }
    return 0;
}
