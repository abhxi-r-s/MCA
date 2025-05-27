// #include<stdio.h>

// void main()
// {
//     int arr[100],limit,choice,del;
//     printf("Enter the array limit :");
//     scanf("%d",&limit);
//     int n=0;

//     printf("    MENU    \n");
//     printf("1.INSERTION \n");
//     printf("2.Deletetion \n");
//     printf("3.Display\n");
//     printf("4.Search\n");
//     printf("5.Traverse\n");
//     printf("6.Update\n");
//     printf("7.Exit\n");

//     printf("Enter yout choice :");
//     scanf("%d",&choice);
    
//     switch(choice)
//     {
//         case 1:printf("Enter the array elements :");
//         for(int i=0;i<limit;i++)
//         {
//             scanf("%d",&arr[i]);
//         }
//         break;
//         case 2:
//         printf("Enter the position where element has to be deleted :");
//         scanf("%d",&del);
        
//         for(int i=del-1;i<limit;i++)
//         {
//             arr[i]=arr[i+1];

//         }
//         printf("Array after deletion :");
//         for(int i=0;i<limit-1;i++)
//         {
//             printf("%d",arr[i]);
//         }
        

//         break;
//         case 3:
//         break;
//         case 4:
//         break;
//         case 5:
//         break;
//         case 6:
//         break;
//         case 7:
//         break;
//     }
    
// }
#include <stdio.h>

#define MAX 100

int main() {
    int arr[MAX];
    int n = 0;  // current size of the array
    int choice, pos, value, found;

    do {
        printf("\nArray Operations:\n");
        printf("1. Insert\n2. Delete\n3. Display\n4. Search\n5. Update\n6. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:  // Insert
                if (n >= MAX) {
                    printf("Array is full!\n");
                } else {
                    printf("Enter position (0 to %d) and value to insert: ", n);
                    scanf("%d %d", &pos, &value);
                    if (pos < 0 || pos > n) {
                        printf("Invalid position!\n");
                    } else {
                        for (int i = n; i > pos; i--) {
                            arr[i] = arr[i - 1];
                        }
                        arr[pos] = value;
                        n++;
                        printf("Inserted %d at position %d\n", value, pos);
                    }
                }
                break;

            case 2:  // Delete
                if (n == 0) {
                    printf("Array is empty!\n");
                } else {
                    printf("Enter position (0 to %d) to delete: ", n - 1);
                    scanf("%d", &pos);
                    if (pos < 0 || pos >= n) {
                        printf("Invalid position!\n");
                    } else {
                        printf("Deleted %d from position %d\n", arr[pos], pos);
                        for (int i = pos; i < n - 1; i++) {
                            arr[i] = arr[i + 1];
                        }
                        n--;
                    }
                }
                break;

            case 3:  // Display
                if (n == 0) {
                    printf("Array is empty!\n");
                } else {
                    printf("Array elements: ");
                    for (int i = 0; i < n; i++) {
                        printf("%d ", arr[i]);
                    }
                    printf("\n");
                }
                break;

            case 4:  // Search
                if (n == 0) {
                    printf("Array is empty!\n");
                } else {
                    printf("Enter value to search: ");
                    scanf("%d", &value);
                    found = 0;
                    for (int i = 0; i < n; i++) {
                        if (arr[i] == value) {
                            printf("Element %d found at position %d\n", value, i);
                            found = 1;
                            break;
                        }
                    }
                    if (!found) {
                        printf("Element %d not found\n", value);
                    }
                }
                break;

            case 5:  // Update
                if (n == 0) {
                    printf("Array is empty!\n");
                } else {
                    printf("Enter position (0 to %d) and new value to update: ", n - 1);
                    scanf("%d %d", &pos, &value);
                    if (pos < 0 || pos >= n) {
                        printf("Invalid position!\n");
                    } else {
                        printf("Updated position %d from %d to %d\n", pos, arr[pos], value);
                        arr[pos] = value;
                    }
                }
                break;

            case 6:  // Exit
                printf("Exiting...\n");
                break;

            default:
                printf("Invalid choice!\n");
        }
    } while (choice != 6);

    return 0;
}
