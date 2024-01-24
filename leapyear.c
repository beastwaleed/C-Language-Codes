#include <stdio.h>
//making a function for leap year

int leapyear(int year) {
if ((year % 4 == 0) && (year % 100 != 0) || (year % 400 == 0)) {
//usingg if condition if it divides by 4 and 400
printf("%d is a Leap Year\n", year);
}
else {
printf("%d is not a Leap Year\n", year); // else printing it is not a leap year
}
}

int main() {

int year;
printf("Enter the Year = ");

scanf("%d", &year);

leapyear(year); //calling the function in main body

return 0;
}
