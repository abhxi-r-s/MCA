#include <stdio.h>
#include <stdlib.h>

struct node {
    struct node *Left;
    int data;
    struct node *Right;
};

struct node *create(int value) {
    struct node *newnode = (struct node *)malloc(sizeof(struct node));
    newnode->data = value;
    newnode->Left = NULL;
    newnode->Right = NULL;
    return newnode;
}

struct node *insert(struct node *root, int value) {
    if (root == NULL) {
        return create(value);
    }
    if (value == root->data) {
        printf("Same data cannot be inserted\n");
    } else if (value < root->data) {
        root->Left = insert(root->Left, value);
    } else {
        root->Right = insert(root->Right, value);
    }
    return root;
}

struct node *search(struct node *root, int value) {
    if (root == NULL) {
        return NULL;
    }
    if (value == root->data) {
        return root;
    } else if (value < root->data) {
        return search(root->Left, value);
    } else {
        return search(root->Right, value);
    }
}

struct node *minValue(struct node *root) {
    struct node *current = root;
    while (current->Left != NULL) {
        current = current->Left;
    }
    return current;
}

struct node *deleteNode(struct node *root, int value) {
    if (root == NULL) {
        return root;
    }
    if (value < root->data) {
        root->Left = deleteNode(root->Left, value);
    } else if (value > root->data) {
        root->Right = deleteNode(root->Right, value);
    } else {
        if (root->Left == NULL) {
            struct node *temp = root->Right;
            free(root);
            return temp;
        } else if (root->Right == NULL) {
            struct node *temp = root->Left;
            free(root);
            return temp;
        }
        struct node *temp = minValue(root->Right);
        root->data = temp->data;
        root->Right = deleteNode(root->Right, temp->data);
    }
    return root;
}

void inorder(struct node *root) {
    if (root != NULL) {
        inorder(root->Left);
        printf("%d ", root->data);
        inorder(root->Right);
    }
}

void preorder(struct node *root) {
    if (root != NULL) {
        printf("%d ", root->data);
        preorder(root->Left);
        preorder(root->Right);
    }
}

void postorder(struct node *root) {
    if (root != NULL) {
        postorder(root->Left);
        postorder(root->Right);
        printf("%d ", root->data);
    }
}

void display(struct node *root) {
    if (root != NULL) {
        display(root->Left);
        printf("%d ", root->data);
        display(root->Right);
    }
}

int main() {
    struct node *root = NULL;
    int num, ch;
    printf("MENU\n");
    printf("-------\n");
    do {
        printf("\n1. INSERT\n2. DELETE\n3. SEARCH\n4. TRAVERSE\n5. DISPLAY\n6. EXIT\n");
        printf("Enter your choice: ");
        scanf("%d", &ch);

        switch (ch) {
            case 1:
                printf("Enter the value to insert: ");
                scanf("%d", &num);
                root = insert(root, num);
                break;
            case 2:
                if (root == NULL) {
                    printf("BST is empty\n");
                } else {
                    printf("Enter the value to delete: ");
                    scanf("%d", &num);
                    root = deleteNode(root, num);
                }
                break;
            case 3:
                if (root == NULL) {
                    printf("BST is empty\n");
                } else {
                    printf("Enter the value to search: ");
                    scanf("%d", &num);
                    if (search(root, num) == NULL) {
                        printf("Element not found\n");
                    } else {
                        printf("Element found\n");
                    }
                }
                break;
            case 4:
                if (root == NULL) {
                    printf("BST is empty\n");
                } else {
                    printf("\n1. Inorder\n2. Preorder\n3. Postorder\nChoose a traversal option: ");
                    int op;
                    scanf("%d", &op);
                    switch (op) {
                        case 1:
                            inorder(root);
                            break;
                        case 2:
                            preorder(root);
                            break;
                        case 3:
                            postorder(root);
                            break;
                        default:
                            printf("Invalid choice\n");
                            break;
                    }
                }
                break;
            case 5:
                if (root == NULL) {
                    printf("BST is empty\n");
                } else {
                    display(root);
                }
                break;
            case 6:
                printf("Exiting program...\n");
                exit(0);
            default:
                printf("Invalid choice\n");
                break;
        }
    } while (1);

    return 0;
}
