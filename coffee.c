#include<stdio.h>


float calculatebill(int choice1,float qty, float price_espresso, float price_latte, float price_cappucino , float price_mocha, float price_americano){

 float total_bill;
 
	switch(choice1){ 

		case 1:

		total_bill=qty*price_espresso;

		break;

		

		case 2:

		total_bill=qty*price_latte;


		break;

		

		case 3:

		total_bill=qty*price_cappucino;


		break;

		

		case 4:

		total_bill=qty*price_mocha;


		break;

		

		case 5:

		total_bill=qty*price_americano;


		break;

	}
return total_bill;

}


int main(){


float price_espresso=2.5,price_latte=3.00,price_cappucino=3.5,price_macho=4.0,price_americano=2.25;

 float total_bill=0;

int choice1;
float qty;

	printf("Welcome to Coffee Shop\n");

	printf("Espresso: $%.2f \n",price_espresso);

	printf("Latte: $%.2f\n",price_latte);

	printf("Cappucino: $%.2f \n",price_cappucino);

	printf("Mocha: $%.2f \n",price_macho);

	printf("Americano: $%.2f\n",price_americano);

	printf("Enter Your COFFEE number from [1 - 5]= ");

	scanf("%d",&choice1);

	

	printf("Enter the Quantity for your Selected Coffee = ");

	scanf("%g",&qty);


switch(choice1) {

float total_bill;

	case 1:

            total_bill = calculatebill(choice1, qty, price_espresso,price_latte,price_cappucino,price_americano,price_macho);

		printf("You Have Selected %g Espresso. That will be of $ %.2f, please \n",qty,total_bill);

		break;

	case 2:

        total_bill = calculatebill(choice1, qty, price_espresso,price_latte,price_cappucino,price_americano,price_macho);

		printf("You Have Selected %g Latte. That will be of $ %.2f, please \n",qty,total_bill);

		break;

	case 3:

        total_bill = calculatebill(choice1, qty, price_espresso,price_latte,price_cappucino,price_americano,price_macho);

		printf("You Have Selected %g Cappucino. That will be of $ %.2f, please \n",qty,total_bill);

		break;

	case 4:

        total_bill = calculatebill(choice1, qty, price_espresso,price_latte,price_cappucino,price_americano,price_macho);
		printf("You Have Selected %g Mocha. That will be of $ %.2f, please \n", qty,total_bill);

		break;

	case 5:

        total_bill = calculatebill(choice1, qty, price_espresso,price_latte,price_cappucino,price_americano,price_macho);
	

		printf("You Have Selected %g Americano. That will be of $ %.2f, please \n", qty,total_bill);

		break;

		

	default:

	printf("Invalid Input");

	break;

		


		

}


}
