#include <stdio.h>
#include <stdlib.h>

#define SIZE 32

int generateReport(double income_amount, double expense_amount, double *income_categories, double *expense_categories);

void getInput(double *arr, int size, const char *category) {
    printf("\nEnter amounts for %s (up to %d entries):\n", category, SIZE);
    for (int i = 0; i < SIZE; i++) {
        printf("Enter amount for entry %d (or any non-numeric value to stop): ", i + 1);
        if (scanf("%lf", &arr[i]) != 1) {
            break;  // Stop input on non-numeric entry
        }
    }
}

int main() {
    double income_categories[SIZE] = {0};
    double expense_categories[SIZE] = {0};
    double income_amount = 0, expense_amount = 0;
    int choice;

    printf("\nWelcome to the Financial Management System!\n");

    do {
        printf("\n---Menu---\n");
        printf("1. Add Income\n");
        printf("2. Add Expense\n");
        printf("3. Generate Report\n");
        printf("4. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                getInput(income_categories, SIZE, "income");
                break;

            case 2:
                getInput(expense_categories, SIZE, "expense");
                break;

            case 3:
                generateReport(income_amount, expense_amount, income_categories, expense_categories);
                break;

            case 4:
                printf("\nThank you for using the Financial Management System!\n");
                break;

            default:
                printf("\nInvalid input! Please try again.\n");
        }
    } while (choice != 4);

    return 0;
}

int generateReport(double income_amount, double expense_amount, double *income_categories, double *expense_categories) {
    printf("\n-----------------------------\n");
    printf("   Financial Report\n");
    printf("-----------------------------\n");

    printf("Total Income: %.2lf PKR\n", income_amount);
    printf("Total Expense: %.2lf PKR\n", expense_amount);
    printf("Balance: %.2lf PKR\n", income_amount - expense_amount);

    printf("\nIncome Categories:\n");
    for (int i = 0; i < SIZE && income_categories[i] != 0; i++) {
        printf("Category %d: %.2lf PKR\n", i + 1, income_categories[i]);
    }

    printf("\nExpense Categories:\n");
    for (int i = 0; i < SIZE && expense_categories[i] != 0; i++) {
        printf("Category %d: %.2lf PKR\n", i + 1, expense_categories[i]);
    }

    return 0;
}

