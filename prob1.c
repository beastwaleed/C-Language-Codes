#include<stdio.h>

int factorial (int num){

if(num<0){
	return 0;
}

if(num ==0 || num== 1){

	return 1;
}
else{
	int fact=1;
	for(int i=1;i<=num;i++){
	fact*=i;
	}
return fact;
}

}


int main(){

int n;
FILE *input;
FILE *output;

int num;

input=fopen("integers.txt","r");
if (input==NULL){

printf("Error Opening File\n ");

return 1;
}

output=fopen("out.txt","w");

while(fscanf(input,"%d",&num)==1){

	int answer=factorial(num);
		printf("\n");
	printf("Factorial of %d is: %d\n",num,answer);

}

fclose(input);
fclose(output);

}


