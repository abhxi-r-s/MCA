#include <stdio.h>
#include <stdlib.h>

struct node {
    int data;
    struct node *next;
    struct node *prev;
};

typedef struct node node;
node *head = NULL;

void insert_end() {
    int data;
    node *temp, *pre;

    printf("\nEnter value: ");
    scanf("%d", &data);

    temp = (node*)malloc(sizeof(node));
    temp->data = data;
    temp->next = NULL;
    temp->prev = NULL;

    if (head == NULL) {
        head = temp;
    } else {
        pre = head;
        while (pre->next != NULL) {
            pre = pre->next;
        }
        pre->next = temp;
        temp->prev = pre;
    }
}

void insert_first() {
    int data;
    node *temp;

    printf("\nEnter value to insert: ");
    scanf("%d", &data);

    temp = (node*)malloc(sizeof(node));
    temp->data = data;
    temp->next = head;
    temp->prev = NULL;
    if (head != NULL) {
        head->prev = temp;
    }
    head = temp;
}

void insert_pos() {
    int data, pos;
    node *temp, *pre;

    printf("\nEnter value to insert: ");
    scanf("%d", &data);
    printf("\nEnter position to insert: ");
    scanf("%d", &pos);

    if (head == NULL && pos == 1) {
        insert_first();
        return;
    }

    temp = head;
    pre = (node*)malloc(sizeof(node));
    pre->data = data;

    if (pos == 1) {
        pre->next = head;
        pre->prev = NULL;
        head->prev = pre;
        head = pre;
    } else {
        int count = 1;
        while (temp != NULL && count < pos - 1) {
            temp = temp->next;
            count++;
        }

        if (temp == NULL) {
            printf("\nInvalid position\n");
            free(pre);
        } else {
            pre->next = temp->next;
            pre->prev = temp;
            if (temp->next != NULL) {
                temp->next->prev = pre;
            }
            temp->next = pre;
        }
    }
}

void display() {
    node *temp;
    int count = 1;

    temp = head;
    if (head == NULL) {
        printf("\nList is empty\n");
        return;
    }

    while (temp != NULL) {
        printf("List [%d]: %d\n", count, temp->data);
        temp = temp->next;
        count++;
    }
}

void search() {
    node *temp;
    int flag = 0, count = 1, data;

    printf("Enter element to search: ");
    scanf("%d", &data);

    temp = head;
    if (head == NULL) {
        printf("\nList is empty\n");
        return;
    }

    while (temp != NULL) {
        if (data == temp->data) {
            flag = 1;
            break;
        }
        temp = temp->next;
        count++;
    }

    if (flag == 1) {
        printf("\nElement found at position %d\n", count);
    } else {
        printf("\nElement not found\n");
    }
}

void delete_first() {
    node *temp;

    if (head == NULL) {
        printf("\nList is empty.\n");
        return;
    }

    temp = head;
    head = head->next;
    if (head != NULL) {
        head->prev = NULL; 
    }
    free(temp);
    printf("\nFirst element deleted.\n");
}

void delete_end() {
    node *temp, *prev;

    if (head == NULL) {
        printf("\nList is empty.\n");
        return;
    }

    temp = head;
    prev = NULL;


    if (temp->next == NULL) {
        head = NULL;
        free(temp);
        printf("\nLast element deleted.\n");
        return;
    }

   
    while (temp->next != NULL) {
        prev = temp;
        temp = temp->next;
    }

    prev->next = NULL;
    free(temp);
    printf("\nLast element deleted.\n");
}

void delete_pos() {
    node *temp, *prev;
    int pos, count = 1;

    if (head == NULL) {
        printf("\nList is empty.\n");
        return;
    }

    printf("\nEnter position to delete: ");
    scanf("%d", &pos);

    temp = head;

    if (pos == 1) {
        head = temp->next;
        if (head != NULL) {
            head->prev = NULL;
        }
        free(temp);
        printf("\nElement at position %d deleted.\n", pos);
        return;
    }

    while (temp != NULL && count < pos) {
        prev = temp;
        temp = temp->next;
        count++;
    }

    if (temp == NULL) {
        printf("\nInvalid position.\n");
    } else {
        prev->next = temp->next;
        if (temp->next != NULL) {
            temp->next->prev = prev; 
        }
        free(temp);
        printf("\nElement at position %d deleted.\n", pos);
    }
}

int main() {
    int opt;

    do {
        printf("\n1) Insert at FIRST");
        printf("\n2) Insert at END");
        printf("\n3) Insert at a POSITION");
        printf("\n4) Display");
        printf("\n5) Search");
        printf("\n6) Delete from FIRST");
        printf("\n7) Delete from END");
        printf("\n8) Delete from POSITION");
        printf("\n0) Quit\n");
        printf("\nChoose option: ");
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
                printf("Invalid option! Try again...\n");
        }
    } while (opt != 0);

    return 0;
}
