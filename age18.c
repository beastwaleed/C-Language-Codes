#include<stdio.h>
int agecheck();

int main(){
int age;

printf("Enter your age = ");
scanf("%d",&age);

agecheck(age);

return 0;

}

int agecheck(int age){

if(age>18){
printf("You are eligible for voting\n");
}

else
printf("You cannot Vote at the age of %d\n",age);
}
