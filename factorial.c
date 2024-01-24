#include <stdio.h>

int factorial(int i, int factor, int num){

	for(i=1;i<=num;i++){
	      factor=factor*i;

}

	  printf("The Factorial of %d is: %d\n",num,factor);
}

int  main(){
 
  int i,factor=1,num;

 printf("Input the number = ");
  scanf("%d",&num);
  
  factorial(i,factor,num);
  
  return 0;
  
  }
  
