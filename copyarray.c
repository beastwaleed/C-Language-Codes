#include<stdio.h>
int main(){

int array1[3];
int array2[3];

int num;


printf("Enter 3 Numbers for Storing in Index;\n");

	for(int i=0;i<3;i++){
	
	printf("Number %d = ", i);
	scanf("%d", &array1[i]);
	
	array2[i]=array1[i];		
		
	
	}

	printf("Numbers in First Array\n");
	for(int i=0;i<3;i++){
	printf(" %d ",array1[i]);
	
	}
	printf("\n");
	
	printf("Numbers in Second Array\n");
	for(int j=0;j<3;j++){
	printf(" %d ", array2[j]);
	
	}

}
