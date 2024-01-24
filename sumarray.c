#include<stdio.h>
int main(){

int myarray[3];
int num;
int sum=0;

printf("Enter 3 Numbers for Storing in Index;\n");

	for(int i=0;i<3;i++){
	printf("Number %d = ", i);
	scanf("%d", &myarray[i]);
	sum+=myarray[i];
	
	}

	printf("Sum of the Numbers is = %d ", sum);
	
	return 0;
	
	}
