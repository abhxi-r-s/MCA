#include <stdio.h>
#include <stdlib.h>

struct node {
    int data;
    struct node *next;
};

typedef struct node node;
node *head = NULL;

void insert_end() {
    int data;
    node *temp, *pre;

    printf("\nEnter value : ");
    scanf("%d", &data);

    temp = (node*)malloc(sizeof(node));
    temp->data = data;

    if (head == NULL) {
        head = temp;
        temp->next = head; 
    } else {
        pre = head;
        while (pre->next != head) {  
            pre = pre->next;
        }
        pre->next = temp;
        temp->next = head; 
    }
}

void insert_first() {
    int data;
    node *temp;

    printf("\nEnter value to insert : ");
    scanf("%d", &data);

    temp = (node*)malloc(sizeof(node));
    temp->data = data;

    if (head == NULL) {
        head = temp;
        temp->next = head; 
    } else {
        temp->next = head;
        head = temp;

        node *last = head;
        while (last->next != head) {
            last = last->next;
        }
        last->next = head; 
    }
}

void insert_pos() {
    int data, pos;
    node *temp, *pre;
    printf("\nEnter value to insert : ");
    scanf("%d", &data);
    printf("\nEnter Position to insert : ");
    scanf("%d", &pos);

    if (head == NULL && pos == 1) {
        insert_first();
        return;
    }

    if (pos == 1) {
        insert_first();
        return;
    }

    temp = (node*)malloc(sizeof(node));
    temp->data = data;

    node *cur = head;
    int count = 1;
    while (cur->next != head && count < pos - 1) {
        cur = cur->next;
        count++;
    }

    if (count == pos - 1) {
        temp->next = cur->next;
        cur->next = temp;
    } else {
        printf("\nInvalid position\n");
        free(temp);
    }
}

void display() {
    node *temp;
    int count = 1;

    temp = head;
    if (head == NULL) {
        printf("\nList is Empty\n");
        return;
    }

    do {
        printf("List [%d] : %d\n", count, temp->data);
        temp = temp->next;
        count++;
    } while (temp != head);  
}

void search() {
    node *temp;
    int flag = 0, count = 1, data;

    printf("Enter element to search : ");
    scanf("%d", &data);

    temp = head;
    if (head == NULL) {
        printf("\nList is Empty\n");
        return;
    }

    do {
        if (data == temp->data) {
            flag = 1;
            break;
        }
        temp = temp->next;
        count++;
    } while (temp != head);  

    if (flag == 1) {
        printf("\nElement found at position %d\n", count);
    } else {
        printf("\nElement not found\n");
    }
}

void delete_first() {
    node *temp;

    if (head == NULL) {
        printf("\nList is Empty.\n");
        return;
    }

    temp = head;
    if (head->next == head) {  
        head = NULL;
    } else {
        head = head->next;
       
        node *last = head;
        while (last->next != temp) {
            last = last->next;
        }
        last->next = head; 
    }

    free(temp);
    printf("\nFirst element deleted.\n");
}

void delete_end() {
    node *temp, *prev;

    if (head == NULL) {
        printf("\nList is Empty.\n");
        return;
    }

    temp = head;
    prev = NULL;

    if (temp->next == head) { 
        head = NULL;
        free(temp);
        printf("\nLast element deleted.\n");
        return;
    }

    while (temp->next != head) {
        prev = temp;
        temp = temp->next;
    }

    prev->next = head; 
    free(temp);
    printf("\nLast element deleted.\n");
}

void delete_pos() {
    node *temp, *prev;
    int pos, count = 1;

    if (head == NULL) {
        printf("\nList is Empty.\n");
        return;
    }

    printf("\nEnter Position to delete : ");
    scanf("%d", &pos);

    temp = head;

    if (pos == 1) {
        head = temp->next;
        free(temp);

        
        node *last = head;
        while (last->next != head) {
            last = last->next;
        }
        last->next = head;  
        printf("\nElement at position %d deleted.\n", pos);
        return;
    }

    while (temp->next != head && count < pos) {
        prev = temp;
        temp = temp->next;
        count++;
    }

    if (temp == head || count != pos) {
        printf("\nInvalid position.\n");
    } else {
        prev->next = temp->next;
        free(temp);
        printf("\nElement at position %d deleted.\n", pos);
    }
}

int main() {
    int opt;

    do {
        printf("\n1) Insert in FIRST");
        printf("\n2) Insert in END");
        printf("\n3) Insert @ a Position");
        printf("\n4) Display");
        printf("\n5) Search");
        printf("\n6) Delete from FIRST");
        printf("\n7) Delete from END");
        printf("\n8) Delete from Position");
        printf("\n0) Quit\n");
        printf("\nChoose option : ");
        scanf("%d", &opt);

        switch (opt) {
            case 1:
                insert_first();
                break;
            case 2:
                insert_end();
                break;
            case 3:
                insert_pos();
                break;
            case 4:
                display();
                break;
            case 5:
                search();
                break;
            case 6:
                delete_first();
                break;
            case 7:
                delete_end();
                break;
            case 8:
                delete_pos();
                break;
            case 0:
                printf("\nExiting...\n");
                break;
            default:
                printf("Invalid option! Try Again...\n");
        }
    } while (opt != 0);

    return 0;
}
