#include<stdio.h>
int divisible();

int main(){
int number;

printf("Enter the number you want to check = ");
scanf("%d",&number);

divisible(number);

return 0;
}

int divisible(int number){

if((number%5==0) && (number%11==0)){
printf("%d is divisible by 5 and 11\n",number);
}

else{
printf("%d is not divisible by 5 and 11\n",number);

}
}
