#include<stdio.h>
int main(){

int myarray[5];
int array2[5];
int temp;

printf("Enter 5 five Numbers to Arrange in Descending Order\n");

	for(int i=0;i<5;i++){
	
	scanf("%d",&myarray[i]);
	
	}

	for(int i=0;i<5;i++){
	
 	for(int j=i+1; j<5; j++){
       	
       	 if(myarray[i]<myarray[j]){	
	
	temp=myarray[i];
	myarray[i]=myarray[j];
	myarray[j]=temp;
	
	}	
	}	
}	

for(int i=0;i<5;i++){
	printf("%d ",myarray[i]);
}

}

