#include <stdio.h>

// Function to check if a number is even or odd
int checkevenodd(int number) {
    if (number % 2 == 0) {
        printf("%d is Even Number\n", number);
    } else {
        printf("%d is Odd Number\n", number);
    }
    return 0;
}

int main() {
    int number;

    // Prompt the user to enter a number
    printf("Enter the Number to check either it is even or odd = ");
    scanf("%d", &number);

    // Call the function to check if the entered number is even or odd
    checkevenodd(number);

    return 0;
}

