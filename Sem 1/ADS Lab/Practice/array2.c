#include <stdio.h>

#define MAX_SIZE 100

// Function declarations
void initializeArray(int arr[], int size);
void displayArray(int arr[], int size);
int sumArray(int arr[], int size);

int main() {
    int arr[MAX_SIZE];
    int size;

    printf("Enter the size of the array: ");
    scanf("%d", &size);

    // Initialize array elements
    initializeArray(arr, size);

    // Display array elements
    printf("Array elements: ");
    displayArray(arr, size);

    // Sum of array elements
    int sum = sumArray(arr, size);
    printf("\nSum of array elements: %d\n", sum);

    return 0;
}

// Function to initialize array elements
void initializeArray(int arr[], int size) {
    printf("Enter %d elements: ", size);
    for (int i = 0; i < size; i++) {
        scanf("%d", &arr[i]);
    }
}

// Function to display array elements
void displayArray(int arr[], int size) {
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

// Function to find the sum of array elements
int sumArray(int arr[], int size) {
    int sum = 0;
    for (int i = 0; i < size; i++) {
        sum += arr[i];
    }
    return sum;
}
