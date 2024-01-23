//Write a program to input month number and print number of days in that month.
#include<stdio.h>
int main(){

    int month;
    char more;
do{
    printf("Enter the Month Number to Display Number of Days: ");
    scanf("%d", &month);

    if(month==1){
        printf("January has 31 Days\n");
    }

    if(month==2){
        printf("February has 28-29 Days\n");
    }       

    if(month==3){
        printf("March has 31 Days\n");
    }  

    if(month==4){
        printf("April has 30 Days\n");
    }  

    if(month==5){
        printf("May has 31 Days\n");
    } 

    if(month==6){
        printf("June has 30 Days\n");
    }   

    if(month==7){
        printf("July has 31 Days\n");
    }  

    if(month==8){
        printf("August has 31 Days\n");
    }  

    if(month==9){
        printf("September has 30 Days\n");
    }  

    if(month==10){
        printf("November has 31 Days\n");
    }  

    if(month==11){
        printf("October has 30 Days\n");
    }  

    if(month==12){
        printf("December has 31 Days\n");
    }  

    printf("Want to Check More Months [Press Y/y for YES or N/n for NO]: ");
    scanf(" %c",&more);

}


while(more=='Y' || more=='y');

    }

