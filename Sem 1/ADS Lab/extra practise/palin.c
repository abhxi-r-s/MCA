#include<stdio.h>
#include<string.h>

int main() {
    char str[10], str2[10];
    int check, i = 0, l = 0;

    printf("Enter the string: ");
    scanf("%s", str);

    l = strlen(str) - 1;  // Set l to the last index of str

    // Reverse the string
    while (l >= 0) {
        str2[i] = str[l];
        i++;
        l--;
    }
    str2[i] = '\0';  // Add null terminator to the reversed string

    // Compare the original and reversed strings
    check = strcmp(str2, str);

    if (check == 0) {
        printf("It is a palindrome\n");
    } else {
        printf("It is not a palindrome\n");
    }

    return 0;
}
