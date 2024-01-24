#include <stdio.h>

int main() {
    int marks;

    printf("Enter Your Marks = ");
    scanf("%d", &marks);

    if (marks > 60) {
        printf("You are Passed but need more improvement\n");
    }

    if (marks == 60) {
        printf("You are Failed\n");
    }

    if (marks < 60) {
        printf("You are very bad in studies\n");
    }

    return 0;
}

