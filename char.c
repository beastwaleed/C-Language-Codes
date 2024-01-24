#include<stdio.h>

int main(){
char ch;

printf("Enter the Character or Number = ");
scanf("%c",&ch);

if((ch>=65 && ch <=90) || (ch>=97 && ch <=122)){
	printf("You have entered a Alphabet\n");
}

else if(ch>='0' && ch<='9'){

		printf("You Have entered a number\n");
		}

else {

	printf("You Have not entered a number or character\n");
}


return 0;
}
