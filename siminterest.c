#include<stdio.h>

float siminterest(float principle, float rate, float time){

 	return (principle*rate*time)/100;

}

int main(){
float principle, rate, time;

printf("Enter the Principle amount = ");
scanf("%f",&principle);

printf("Enter the Rate(In Percentage) = ");
scanf("%f",&rate);

printf("Enter the time period(in years)= ");
scanf("%f",&time);

printf("The Simple Interest is %g\n",siminterest(principle,rate,time));
return 0;
}

