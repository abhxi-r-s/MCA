#include <stdio.h>
#include <stdbool.h>

// Global variables
int U[100], n3;           // Universal set and its size
int unionset[100], interset[100]; // Arrays to store union and intersection results

void setToBit(int set[], int size, int bitSet[]);
void readSet(int arr[], int size);
void printSet(int arr[], int size);
bool isPresent(int num);
void unionSet(int bit1[], int bit2[]);
void interSectionSet(int bit1[], int bit2[]);

int main()
{
    int n1, n2;
    int set1[100], set2[100]; // Two sets
    int bit1[100] = {0}, bit2[100] = {0}; // Bit representations of the sets

    printf("\nEnter the size of the universal set: ");
    scanf("%d", &n3);

    if (n3 <= 0 || n3 > 100) {
        printf("Invalid size for the universal set. Exiting.\n");
        return 1;
    }

    printf("\nEnter the elements of the universal set:\n");
    for (int i = 0; i < n3; i++) {
        scanf("%d", &U[i]);
    }

    printf("\nEnter the size of the first set: ");
    scanf("%d", &n1);
    readSet(set1, n1);

    printf("\nEnter the size of the second set: ");
    scanf("%d", &n2);
    readSet(set2, n2);

    setToBit(set1, n1, bit1);
    setToBit(set2, n2, bit2);

    printf("\nUniversal Set:\n");
    printSet(U, n3);

    printf("\nSet 1 Elements:\n");
    printSet(set1, n1);

    printf("\nSet 2 Elements:\n");
    printSet(set2, n2);

    printf("\nBit Representation of Set 1:\n");
    printSet(bit1, n3);

    printf("\nBit Representation of Set 2:\n");
    printSet(bit2, n3);

    unionSet(bit1, bit2);
    printf("\nBit Representation after Union:\n");
    printSet(unionset, n3);

    interSectionSet(bit1, bit2);
    printf("\nBit Representation after Intersection:\n");
    printSet(interset, n3);

    return 0;
}

void setToBit(int set[], int size, int bitSet[]) {
    // Creates the bit set from the input set
    for (int i = 0; i < n3; i++) {
        bool elementPresent = false;
        for (int j = 0; j < size; j++) {
            if (U[i] == set[j]) {
                elementPresent = true;
                break;
            }
        }
        bitSet[i] = elementPresent ? 1 : 0;
    }
}

void readSet(int arr[], int size) {
    // Reads the set and ensures all elements are in the universal set
    int temp;
    for (int i = 0; i < size; i++) {
        printf("\nEnter element %d: ", i + 1);
        while (true) {
            scanf("%d", &temp);
            if (isPresent(temp)) {
                arr[i] = temp;
                break;
            } else {
                printf("\nInvalid Entry. Please re-enter element %d: ", i + 1);
            }
        }
    }
}

void printSet(int arr[], int size) {
    // Prints the set or array
    for (int i = 0; i < size; i++) {
        printf("%d\t", arr[i]);
    }
    printf("\n");
}

bool isPresent(int num) {
    // Checks if an element is present in the universal set
    for (int i = 0; i < n3; i++) {
        if (U[i] == num) {
            return true;
        }
    }
    return false;
}

void unionSet(int bit1[], int bit2[]) {
    // Performs the union operation on bit sets
    for (int i = 0; i < n3; i++) {
        unionset[i] = (bit1[i] || bit2[i]) ? 1 : 0;
    }
}

void interSectionSet(int bit1[], int bit2[]) 
{
    // Performs the intersection operation on bit sets
    for (int i = 0; i < n3; i++) {
        interset[i] = (bit1[i] && bit2[i]) ? 1 : 0;
    }
}