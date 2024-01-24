#include<stdio.h>
//function for regular package bill
float regular(float accnum, float minused,float regprice,float finalregmin){

    // Prompt user to input their account number.

	printf("Enter Your Account Number = ");
	scanf("%g",&accnum);

    // Prompt user to input minutes used in regular.

	printf("Enter the Minutes Used in Regular Service [=> First 50 Minutes are free] = ");
	scanf("%g",&minused);

//if condition for minutes less than or equal to 50 
	if(minused<=50){
	printf("\n");
	// Display a bill reciept for the premium package
	printf("\t----- Bill -----\n\n");
	
	//display account number
	printf("Your Account Number = %g \n",accnum);
	//displaying user is using regular service
	printf("You are Using Regular Service\n");
	//displaying Minutes Used
	printf("Minutes Used = %g\n",minused);
	
	printf("You are Using 50 free Minutes\n");
	//displaying the amount to pay
	printf("You have to Pay $ %.2f\n",regprice);
	
	}
	
	
	//else if condition for minutes greater than 50 
	else if(minused>50) {
	
	printf("\n");
	printf("\t~~~Bill For Regular Package~~~\n");
	printf("\tYour Account Number = %g \n",accnum);
	printf("\tMinutes Used = %g\n",minused);
	printf("\tYou are Using Regular Service\n");
	
	//storing finalmins after subtracting 
	float finalmins=minused-50;
	finalregmin=finalmins*0.20;
	
	float totalbill=finalregmin+10;
	
	printf("\tCharges for Regular Package = $%.2f\n",finalregmin);
	printf("\tTotal Bill for Regular Package = $%.2f\n",totalbill);
	}

}

// Function for premium package bill
float premium(float accnum, float minused,float premprice,float daymin, float nightmin, float daybillmin, float nightbillmin){

// Prompt user to input their account number.
	printf("Enter Your Account Number = "); 
	scanf("%g",&accnum); //store the account number entered by the user.
	
// Prompt user to input minutes used in day
	printf("Enter the Minutes Used In Day [First 75 Minutes are free] (Enter 0 if not used) = ");
	scanf("%g",&daymin); // store the minutes used in day
	
// Prompt user to input minutes used in night
	printf("Enter the Minutes Used in Night [First 100 Minutes are free] (Enter 0 if not used) = ");
	scanf("%g",&nightmin); // store the minutes used in night
	
	printf("Your Account Number = %f\n",accnum);

//if condition for minutes less than or equal to 75 used by a user
	if (daymin<=75){
	
		printf("\n");						
		printf("\t~~~Bill for Premium Package~~~\n");
		printf("\n");
		printf("You have to Pay $ 25.00 for Premium Package\n");
		printf("\n");
		printf("-------- Day Charges -------- \n");
		printf("\n");
		printf("Minutes Used = %g\n",daymin);
		printf("You are Using Free 75 Minutes\n");
		
		}	
	// else if condition for minutes greater than 75 used 
	else if (daymin>75){
	
		printf("\n");
		printf("\t~~~Bill for Premium Package~~~\n");
		printf("\n");
		printf("You have to Pay $ 25.00 for Premium Package\n");
		printf("\n");
		printf("-------- Day Charges -------- \n");
		printf("\n");
		float dayfinalmins=daymin-75;
		daybillmin=0.1*dayfinalmins;
		printf("Minutes Used in Day = %g\n",daymin);
		printf("You have to Pay $ %.2f for Day Charges\n",daybillmin);
		
	}

// if condition for minutes used in night less than or equal to 100
	if (nightmin<=100){

	printf("\n");
	printf("-------- Night Charges -------- \n");
	printf("\n");
	printf("Minutes Used in Night = %g\n",nightmin);
	printf("You are using Free 100 Minutes\n");
	
	}
	
	//else if condtion for minutes in night greater than 100
	else if (nightmin>100){
	
	printf("\n");
	
	printf("\n");
	//displaying night charges
	printf("-------- Night Charges -------- \n");
	printf("\n");
	printf("Minutes Used in Night = %g\n",nightmin);
	float nightfinalmins=nightmin-100;
	nightbillmin=0.05*nightfinalmins;
	printf("You have to Pay $%.2f for Night Charges\n",nightbillmin);
	printf("\n");
	}
	printf("\t-----------\n");
	printf("\n");
	printf("Total Bill for Premium Package is = $%.2f\n",25+nightbillmin+daybillmin);
	printf("\t-----------\n");
}

//main body of the program
int main(){
//declaring all the variables used in functions and in body
float accnum, minused,daymin, nightmin, regprice=10.0, premprice=25.0, daybillmin, nightbillmin, finalregmin;
char service;

//printing choice for Services for prompting from User
	printf("Enter [r/R for Regular Service] [p/P for Premium Service] = ");
	scanf("%c", &service);

//if user press r or R then ccondition will work
	if (service=='r' || service=='R'){
	
	//calling the function for this condition
		regular(accnum,minused,regprice,finalregmin);
	
	}
//if user press P or p then ccondition will work
	else if (service=='p' || service=='P'){

		//calling the function for this condition
	premium(accnum, minused, premprice,daymin, nightmin, daybillmin, nightbillmin);
	
	}
	
//if user press anyother character then this condition will work
	else if (service != 'r' || service != 'R' || service != 'p' || service != 'P'){
	
		printf("Invalid Input for Choosing Package\n");
	
	}

return 0;
}
