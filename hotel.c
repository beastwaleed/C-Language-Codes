#include<stdio.h>

int main(){

int choice,qty;
float brgr_price=5.99,pizza_price=7.99,salad_price=4.49,pasta_price=8.99,soda_price=1.99 ,bill;
char exit;

printf("Welcome to Our Resturant\n");
printf("Burger - %.2f\n",brgr_price);
printf("Pizza - %.2f\n",pizza_price);
printf("Salad - %.2f\n",salad_price);
printf("Soda - %.2f\n",soda_price);

do 
{
	printf("Enter the Item Number you want to Order = ");
	scanf("%d",&choice);
	
		if(choice < 1 || choice > 5 ){
			
			printf("Enter an Invalid Item Number\n");
		}
	
	printf("Enter the Quantity = ");
	scanf("%d",&qty);
	
		if(qty<1){
		
			printf("Quantity must be greater than zero. Please enter a valid quantity\n");
			
		}
		
		
		switch (choice) {
            case 1:
                
                bill += qty * brgr_price;
                printf("Burger added to your order.\n");
                break;
            
            case 2:
                bill += qty * pizza_price;
                printf("Pizza added to your order.\n");
                break;
            
            
            case 3:
                bill += qty * salad_price;
                printf("Salad added to your order.\n");
                break;
            
            
            case 4:
               bill += qty * pasta_price;
                printf("Pasta added to your order.\n");
               
               	 break;
            
            case 5:
               bill += qty * soda_price;
                printf("Soda added to your order.\n");
                break;
        }

	printf("Do You want to Order More Items? [Y/N] = ");
	scanf("%c",&exit);

} while (exit == 'Y' || exit == 'y');

	printf("\n Thankyou For Your Order!\n");
	printf("Total Bill = %.2f\n",bill);
	
	
	
return 0;
	
	}
	
	



