#include<stdio.h>

// Function prototype to calculate the absolute value of a number
void abss(int num);

int main() {
    int num;

    // Prompt the user to enter a number
    printf("Enter an Integer = ");
    scanf("%d", &num);

    // Call the abss function to calculate the absolute value of the number
    abss(num);

    return 0;
}

// Function to calculate the absolute value of a number
void abss(int num) {
    if (num >= 0) {
        // If the number is already positive or zero, print a message indicating that
        printf("%d is already positive\n", num);
    } else {
        // If the number is negative, calculate its absolute value
       int num1=num*-1;

        // Print the absolute value of the number
        printf("The Absolute value of %d is %d\n", num,num1);
    }
}

