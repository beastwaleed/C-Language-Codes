#include <stdio.h>

int main() {
    char ch;

    printf("Enter a character: ");
    scanf(" %c", &ch);

    if (ch >= 'A' && ch <= 'Z') {
        // Convert uppercase to lowercase
        ch = ch + 32;
        printf("Converted to lowercase: %c\n", ch);
    } else if (ch >= 'a' && ch <= 'z') {
        // Convert lowercase to uppercase
        ch = ch - 32;
        printf("Converted to uppercase: %c\n", ch);
    } else {
        printf("You did not enter an alphabet.\n");
    }

    return 0;
}

