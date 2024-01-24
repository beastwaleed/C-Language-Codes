#include<stdio.h>


// Function for finding minimum value in the array
int minimum(int myarray[10], int sizeofarray){
int min_num=myarray[0];
   for(int i=1;i<sizeofarray;i++){
   
   	if(myarray[i]<min_num){
   		min_num=myarray[i];
   	
   	}
   	
   
   }
	return min_num;
}

// Function for finding maximum value in the array
int maximum(int myarray[10],int sizeofarray){

int max_num=myarray[0];

	for(int i=1;i<sizeofarray;i++){
	
	if(myarray[i]>max_num){
	
		max_num=myarray[i];
	
	}
	
	}
	return max_num;
}


float average(int myarray[10],int sizeofarray){

int sum=0;
float avg=0;
	
	for(int i=0;i<sizeofarray;i++){
		sum=sum+myarray[i];
	}
	
	avg=(float)sum/sizeofarray;

	return avg;
}


// function for printing value from index 2 from the array
int indextwo(int myarray[10],int sizeofarray){

return myarray[2];
}


int lastindex(int myarray[10],int sizeofarray){

return myarray[9];
}

//function for finding out odd number count in the array
int oddcount(int myarray[10],int sizeofarray){

int odd_num=0;
	for(int i=0;i<sizeofarray;i++){
	  if(myarray[i]%2!=0){
	  	odd_num++;
	  	
	  }	
	
	}
	return odd_num++;
}


//function for finding out even number count in the array
int evencount(int myarray[10],int sizeofarray){

int even_num=0;
	for(int i=0;i<sizeofarray;i++){
	  if(myarray[i]%2==0){
	  	even_num++;
	  	
	  }	
	
	}
	return even_num++;
}


// function for making reverse order of the array 
int reverseorder(int myarray[10], int sizeofarray) {
	int reverse_array[10], temp;
	
	printf("Array in Reverse Order \n");
      for (int i = sizeofarray - 1; i >= 0; i--){
	  for (int j = 0; j < sizeofarray; j++){
		
		reverse_array[j] = myarray[i];
			temp = j;
		
		}
		
             printf("%d ", reverse_array[temp]);
	
	}
	
}

// main body of the program
int main(){

//array for this program containing 10 elements
int myarray[10]; 
int sizeofarray=10; //size of array which is 10
printf("Enter 10 Elements in Array = "); //prompting user to enter the 10 numbers

for(int i=0;i<sizeofarray;i++){ //loop for getting values in every index of array
scanf("%d", &myarray[i]);
}

printf("Minimum value in the array is = %d\n",minimum(myarray,sizeofarray));	//printting minimum value in the array
printf("Maximum value in the array is = %d\n",maximum(myarray,sizeofarray));	//[printing maximum value in the array
printf("Average of the array is = %.2f\n",average(myarray,sizeofarray));	//printing average of the sum of values of array
printf("Value at Index 2 is %d\n",indextwo(myarray,sizeofarray));		//printing the value at index 2
printf("Value at Last Index is %d\n",lastindex(myarray,sizeofarray));		//printing the value of last index
printf("Odd Element Count = %d\n",oddcount(myarray,sizeofarray));		//printing odd count of the array 
printf("Even Element Count = %d\n",evencount(myarray,sizeofarray));		// printing even count of the array
reverseorder(myarray,sizeofarray);						//printing the array in the reveerse order
printf("\n");

return 0;


}

