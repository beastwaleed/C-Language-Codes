#include<stdio.h>
int main(){

char firstname[15];
char maidenname[15];
char lastname[15];

printf("Enter Your First Name: ");
scanf("%s", firstname);

printf("Enter Your Middle Name: ");
scanf("%s", maidenname);

printf("Enter Your Last Name: ");
scanf("%s", lastname);

printf("Your Full Name is: %s %s %s\n", firstname,maidenname,lastname);

}
