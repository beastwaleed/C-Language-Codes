#include<stdio.h>
int positivenegativezero();

int main(){
int number;

printf("Enter the Number you want to check = ");
scanf("%d",&number);

positivenegativezero(number);

}

int positivenegativezero(int number){

if(number>0){
printf("%d is Positive\nGithub: BeastWaleed",number);
}

if(number<0){
printf("%d is Negative\nGithub: BeastWaleed",number);
}

if(number==0){
printf("%d is Zero\nGithub: BeastWaleed",number);

}

}

