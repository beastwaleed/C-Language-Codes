#include<stdio.h>

int main(){


FILE *flight;
FILE *update;


flight=fopen("flight_info.txt","r");
update=fopen("Updated.txt","w");

int time1; 

if(flight=NULL){
	printf("Error Opening Flights File\n");
	
	fclose(flight);
	return 1;
}

f





return 0;
}
