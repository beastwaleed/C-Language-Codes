#include<stdio.h>

int main(){
int myarray[10]={1,2,3,4,4,5,6,7,8,4};
int count=0;
int find;

printf("Enter Element to search in Array\n");
printf("[1,2,3,4,4,5,6,7,8,4]\n"); //printing sample array so that user can choose the value from it 

scanf("%d", &find); //getting value user want to search in array

  for(int i=0;i<10;i++){ //using for loop for checking every number
  	
  	if(myarray[i]==find){ //if array is equal to number user searches 
  	
  		count++; // then increment in count

   		}
	
  }
if(count ==0){
printf("Element not Found\n");

}

else{
	 printf("Element %d found %d times\n",find,count);  //printing the searched number and how many times the number is 

}

}
