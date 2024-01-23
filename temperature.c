/*. Write a C program that checks two given temperatures and returns true
if one temperature is less than 0 
and the other is greater than 100, 
otherwise it returns false. */

#include<stdio.h>
int main(){
int temp1,temp2;
printf("Enter Temperature 1: ");
scanf("%d",&temp1);

printf("Enter Temperature 2: ");
scanf("%d",&temp2);

if(temp1<0 && temp2>100){

    printf("True\n");
}

else{
    printf("False\n");
}

}