#include<stdio.h>
int main(){

int arr[4][3]; //array of 4x3
int min=0; //initialzing minimum value as 0;

	for(int row=0;row<4;row++){ //loop for rows 
		for(int col=0;col<3;col++){ //loop for coloum
		
	printf("Enter Elements for [%d Row %d coloum] = ", row+1, col+1); //printing to enter value for array
	scanf("%d",&arr[row][col]); //getting values in array
	
		
		}
	
	}
	
	min=arr[0][0]; // initializing minimum as first element of array
	
	for(int rows=0;rows<4;rows++){ //running loop for rows
		for(int col=0;col<3;col++){ //running loop for coloums 
		
		if(arr[rows][col]<min){ //condition for checking minimum 
		min=arr[rows][col]; //setting the minimum value of array in min variable
			}
		}
	
	}	
	
	printf("%d is the Smallest Number\n", min); //printing minimum number stored in min variable
	}
