//program to input electricity unit charges and calculate total electricity bill

#include<stdio.h>
int main(){

    int units;
    printf("\t------Elecntry Bill Generator------\n");
    printf("Enter Number of Electricity Units You have Used: ");
    scanf("%d", &units);

    if(units<0){
        printf("Please Enter Units in Postive Value\n");
    }

    if(units>0 || units<=50){
        printf("Your Bill is %d [Rs. 0.50/unit]", 0.5/units);
    }

}
