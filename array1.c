#include<stdio.h>
int main(){

int myarray[10];
int num;

printf("Enter 10 Numbers for Storing in Index;\n");

	for(int i=0;i<10;i++){
	printf("Number %d = ", i);
	scanf("%d", &myarray[i]);
	}

	for(int i=0;i<10;i++){
	printf("%d ", myarray[i]);
	
	}

}
