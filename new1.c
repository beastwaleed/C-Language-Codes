#include<stdio.h>

int main(){



int myarray[25];

int unique_num=0;

int num;

int duplicate=0;



	printf("Enter 25 Numbers = \n");

	for(int i=0;i<25;i++){

		

		scanf("%d",&num);

		if(num<10 && num>100){

		i--;

	printf("You have to Enter Values greater than 10 and lesser than or equal to 100\n");

		}

	else {

	for (int j = 0; j < unique_num; j++) {

            

            if ( num== myarray[j]) {

            

            duplicate = 1;

            

                break;

            }

	

	}

	

	if(duplicate!=1){

	

	 myarray[unique_num]=num;

	unique_num++;

	

	}



}



}

	

	printf("Unique values entered by User are = \n");

	for(int i=0;i<unique_num;i++){

		printf("%d ",myarray[i]);

	}

	

	return 0;

}
