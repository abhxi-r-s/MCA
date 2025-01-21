#include <stdio.h>
#include <stdlib.h>

typedef struct Node
{
    int data;
    struct Node *Lchild;
    struct Node *Rchild;
} node;

node *root = NULL;

void create()
{
    int num;
    printf("Enter the Number of Nodes in Your tree: ");
    scanf("%d", &num);

    for (int i = 0; i < num; i++)
    {
        node *newNode = (node *)malloc(sizeof(node));
        if (newNode == NULL)
        {
            printf("Memory allocation failed.\n");
            return;
        }

        printf("Enter a Value for the Node: ");
        scanf("%d", &newNode->data);
        newNode->Lchild = NULL;
        newNode->Rchild = NULL;

        if (root == NULL)
        {
            root = newNode;
        }
        else
        {
            node *temp = root;
            node *parent = NULL;

            while (temp != NULL)
            {
                parent = temp;
                if (newNode->data < temp->data)
                {
                    temp = temp->Lchild;
                }
                else
                {
                    temp = temp->Rchild;
                }
            }

            if (newNode->data < parent->data)
            {
                parent->Lchild = newNode;
            }
            else
            {
                parent->Rchild = newNode;
            }
        }
    }
}


void traversal(node *temp)
{
    if (temp == NULL)
    {
        return;
    }

    traversal(temp->Lchild);
    printf("%d ", temp->data);
    traversal(temp->Rchild);
}


int main()
{
    create();
    printf("In-order Traversal of the Tree: ");
    traversal(root);
    printf("\n");

    return 0;
}
