#include<stdio.h>
#include<time.h>
#include<stdlib.h>
#include<unistd.h>

int randomno()
{
    sleep(1);
    srand(time(NULL));
    return rand()%6+1;
}


int main(){
int sum1=0,sum2=0;
char player1[100], player2[100];

printf("Welcome to the Dice Game!\n");

printf("Player 1, Please Enter Your Name: ");
fgets(player1, sizeof(player1),stdin);

printf("Player 2, Please Enter Your Name: ");
fgets(player2, sizeof(player2), stdin);

printf("Rolling Dice for %s", player1);
printf("Dice 1: %d\n",randomno());
printf("Dice 2: %d\n",randomno());
printf("Dice 3: %d\n",randomno());

sum1+=randomno();

if(sum1==18){
sum1=0;

}

printf("%d\n", sum1);
printf("Rolling Dice for %s", player2);
printf("Dice 1: %d\n",randomno());
printf("Dice 2: %d\n",randomno());
printf("Dice 3: %d\n",randomno());

}


