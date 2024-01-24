#include<stdio.h>
int maximum();

int main(){
int num1,num2;

printf("Enter first values =");
scanf("%d",&num1);

printf("Enter second value=");
scanf("%d",&num2);

maximum(num1,num2);

return 0;
}

int maximum(int num1, int num2){
if(num1>num2){
printf("%i\nCredit=Beast Waleed\n",num1);
}


else{
printf("%i\nCredit=Beast Waleed\n",num2);
}

}
