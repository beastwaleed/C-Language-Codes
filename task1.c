#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>

int main(){

char newpass[100],confirmpass[100];
int error=0;

printf("Password Must be of 8-15 digits\n");
printf("Password Must Contains a Upperletter\n");
printf("New Password and Confirmation Password must match\n");
printf("Enter New Password: ");
fgets(newpass,sizeof(newpass),stdin);

printf("Enter the Password Again for Confirmation: ");
fgets(confirmpass,sizeof(confirmpass),stdin);

if(newpass<8 || newpass>15){
error++;

}


if(newpass!=confirmpass){
	error++;
}


if(newpass<'65' || newpass>'90'){
	error++;

}

if(error==3){

printf("Invalid Password\n");

}

if(error==0){

printf("Password Has Been Changed Successfully!\n");

}

//printf("%d",error);
}
