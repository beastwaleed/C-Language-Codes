#include<stdio.h>
// these are prototypes
	int add();
	int subtract();
	int product();
	int division();
	int moduloDivision();
//prototypes must be above int main()

int main()
{
    // Take the input from the user.
    int number1, number2;
    printf("Enter two Integers: ");
    scanf("%d %d", &number1, &number2);
 
    printf("Sum of %d+%d = %d \n", number1, number2, add(number1, number2));
    printf("subtraction of %d-%d = %d \n", number1, number2, subtract(number1, number2));
    printf("Multiplication of %d*%d = %d \n", number1, number2, product(number1, number2));
    printf("Division of %d/%d = %d \n", number1, number2, division(number1, number2));
    printf("ModuloDivision of %d%%%d = %d \n", number1, number2, moduloDivision(number1, number2));
 
    return 0;
}
 
//Function for Addition;
int add(int num1, int num2)
{
    return num1+num2;
}
 
//Function for Subtraction:
int subtract(int num1, int num2)
{
    return num1-num2;
}
 
//Function for Multiplication;
int product(int num1, int num2)
{
    return num1*num2;
}

//Function for Division; 
int division(int num1, int num2)
{
    return num1/num2;
}
 
//Function for Modulo Division;
int moduloDivision(int num1, int num2)
{
    return num1%num2;
}
