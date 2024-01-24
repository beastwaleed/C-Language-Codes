#include<stdio.h>
int main(){

int arr[2][2]; //array of 2x2


	for(int row=0;row<2;row++){ //loop for rows
	for(int col=0;col<2;col++){ //loop for coloums
		
		printf("Enter Element for %d row , %d coloumn= ", row+1,col+1); //printing the rows and coloums to user to enter values
		scanf("%d",&arr[row][col]); //getting values in array
		
		}
	
	}	
	

	printf("Transpose of the Matrix is:\n");
	for(int col=0;col<2;col++){ //starting loop from coloums for transposing  

	for(int row=0;row<2;row++){ //loop for rows

	printf("%d ",arr[row][col]); //printing the transpose of matrix
		}
			
	printf("\n"); //printing new line
	
	}

}
