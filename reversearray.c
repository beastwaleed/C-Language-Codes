#include<stdio.h>
int main(){

int myarray[10];
int num,n ;

printf("Enter 10 Numbers for Storing in Index;\n");

printf("Enter Number of Elements in Array; ");
scanf("%d", &n);

	for(int i=0;i<n;i++){
	printf("Number %d = ", i+1);
	scanf("%d", &myarray[i]);
	}

	for(int i=n-1;i>=0;i--){
	printf("%d ", myarray[i]);
	
	}

}
