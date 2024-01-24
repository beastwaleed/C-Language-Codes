#include<stdio.h>
#include<math.h>

// Function to calculate Simple Interest
float calculateSimpleInterest(float principle){

float rate=5;
float time=1;

return (principle*time*rate)/100;

}

// Function to calculate Compound Interest for one year

float calculateCoumpouninterestoneyear(float principle){

float rate=12;
float time=1;

return (principle*(1+rate/100));

}

// Function to calculate Compound Interest for specified years

float calculateCompoundspecifiedyears(float principle, float time, float rate){

	// func_rate is equal to the formula (1+rate/100) so we can take pow function easily
float func_rate=1+rate/100;

return (principle*(pow(func_rate,time)));

}

//starting main body of the program 
int main(){

// variables used in the program
float principle,rate,time;

    // Input the principle amount

printf("Enter the Principle Amount for All Interests (Simple, Compound for 1 year, Compound for Specified Years) = ");
scanf("%g",&principle);

    // Input the interest rate for Compound Interest of specified years

printf("\nEnter the Interest Rate for Compound Interest of Specified years = ");
scanf("%g",&rate);

    // Input the time period for Compound Interest of specified years
printf("\nEnter the Time period for Compound Interest if Specified Years = ");
scanf("%g",&time);

	// Printing Output of Simple Interest for 1 year 
printf("The Simple Interest for 1 year will be = %g\n",calculateSimpleInterest(principle));

	// Printing Output of Coumpound Interest for 1 year  
printf("The Compound Interest for 1 year will be = %g\n",calculateCoumpouninterestoneyear(principle));

	// Printing Output of Compound Interest of Specified rate and specified time period 
printf("The Coumpound Interest for %g years and %g rate will be = %g\n",time, rate, calculateCompoundspecifiedyears(principle,time,rate));

return 0;
}
