#include <stdio.h>
#include <stdbool.h>
int set1[20], n1, set2[20], n2, U[40], n3, bit1[20], bit2[20], unionset[20], interset[20];
void readSet(int a[], int size);
void printSet(int a[], int size);
bool isPresent(int num);
void setToBit(int set[], int size, int bitSet[]);
void unionSet(int s1[], int s2[]);
void interSectionSet(int s1[], int s2[]);
void main()
{
    int p, temp;
    bool elementInU = false;
    printf("\nEnter the size of the universal set:");
    scanf("%d", &n3);
    printf("\nEnter the elements\n");
    for (int i = 0; i < n3; i++)
    {
        scanf("%d", &temp);
        // Checking if element already entered
        if (i != 0)
        {
            for (int j = 0; j <= i - 1; j++)
            {
                if (temp == U[j])
                {
                    // element already present in universal set
                    elementInU = true;
                    break;
                }
            }
            if (!elementInU)
            {
                // element is unique
                U[i] = temp;
            }
            else
            {
                printf("\nElement already present!\nPlease enter another element\n");
                i--;
                // decrementing i to stay in the same iteration
                elementInU = false;
                // changing flag to previous state
            }
        }
        else
        {
            U[i] = temp;
        }
    }
    printf("\nEnter the size of the first set:");
    scanf("%d", &n1);
    readSet(set1, n1);
    printf("\nEnter the size of the second set:");
    scanf("%d", &n2);
    readSet(set2, n2);
    setToBit(set1, n1, bit1);
    printf("\nUniversal set\n");
    printSet(U, n3);
    printf("\nSet 1 Elements\n");
    printSet(set1, n1);
    printf("\nSet 2 Elements\n");
    printSet(set2, n2);
    printf("\nBit Repersentation of Set 1\n");
    setToBit(set1, n1, bit1);
    printSet(bit1, n3);
    printf("\nBit Repersentation of Set 2\n");
    setToBit(set2, n2, bit2);
    printSet(bit2, n3);
    printf("\nBit Representation after union\n");
    unionSet(bit1, bit2);
    printSet(unionset, n3);
    printf("\nBit Representation after intersection\n");
    interSectionSet(bit1, bit2);
    printSet(interset, n3);
    scanf("%d", p);
}
void setToBit(int set[], int size, int bitSet[])
// Creates the bit set from the  set as bitSet
{
    for (int i = 0; i < n3; i++)
    {
        bool elementPresent = false;
        for (int j = 0; j < size; j++)
        {
            if (U[i] == set[j])
            {
                elementPresent = true;
                break;
            }
        }
        if (elementPresent)
        {
            bitSet[i] = 1;
        }
        else
        {
            bitSet[i] = 0;
        }
        elementPresent = false;
    }
}
void readSet(int arr[], int size)
{
    // Reads the set
    int temp = 0;
    for (int i = 0; i < size; i++)
    {
        printf("\nEnter element %d:", i);
        while (true)
        {

            scanf("%d", &temp);
            if (isPresent(temp))
            {
                arr[i] = temp;
                break;
            }
            else
            {
                printf("\nInvalid Entry..\nPlease re-input element %d:", i);
            }
        }
    }
}
void printSet(int arr[], int size)
{
    // Prints the set
    for (int i = 0; i < size; i++)
    {
        printf("%d\t", arr[i]);
    }
}
bool isPresent(int num)
// Returns true if the element is present in universal set
{
    bool present = false;
    for (int i = 0; i < n3; i++)
    {
        if (U[i] == num)
        {
            present = true;
            break;
        }
    }
    return present;
}
void unionSet(int bit1[], int bit2[])
{
    // Performs the union operation on the bit values
    for (int i = 0; i < n3; i++)
    {
        if (bit1[i] == 1 || bit2[i] == 1)
        {
            unionset[i] = 1;
        }
        else
        {
            unionset[i] = 0;
        }
    }
}
void interSectionSet(int bit1[], int bit2[])
{
    // Performs the intersection between two sets
    for (int i = 0; i < n3; i++)
    {
        if (bit1[i] == 1 && bit2[i] == 1)
        {
            interset[i] = 1;
        }
        else
        {
            interset[i] = 0;
        }
    }
}