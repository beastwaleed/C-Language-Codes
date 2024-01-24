#include<stdio.h> //standard input output library
#include<time.h> //time libray
#include<stdlib.h> //library for algorithms 
#include<unistd.h> 

int randomno() //function to generating a random number between 1 and 6

{
    sleep(1); //sleep timer for getting different random value
    srand(time(NULL)); //seed the random number generator
    return rand()%6+1;	//return a random number between 1 and 6
}

int main(){
int sum1=0,sum2=0; //variables to store the total scores of each player
char player1[100], player2[100]; //arrays to store the names of the players

printf("Welcome to the Dice Game!\n"); 
printf("Player 1, Please Enter Your Name: ");
scanf("%s", player1);

printf("Player 2, Please Enter Your Name: ");
scanf("%s", player2);

printf("Rolling Dice for %s....\n", player1);

int firstplayer[100]; //array to store the values of dice rolls for the first player
int secondplayer[100]; //array to store the values of dice rolls for the second player


for(int i=0;i<3;i++){     //Loop to simulate three dice rolls for the first player

firstplayer[i]=randomno(); //generate a random number for the current dice 
printf("Dice %d: %d\n",i+1,firstplayer[i]); // print the result of the current dice value

sum1+=firstplayer[i];   //add the current dice roll to the total score of the first player


}

if(sum1==18){ // reset the total score to 0 if the sum is 18 as per condition
sum1=0;

}



printf("Rolling Dice for %s....\n", player2);

for(int j=0;j<3;j++){ //Loop to simulate three dice rolls for the second player


secondplayer[j]=randomno(); //generate a random number for the current dice 

printf("Dice %d: %d \n",j+1,secondplayer[j]); //print the result of the current dice 

sum2+=secondplayer[j]; //add the current dice to the total score of the second player

}

if (sum2==18){ // reset the total score to 0 if the sum is 18 as per conditions
	sum2=0;

}
printf("Calculating the total scores....\n");

printf("Total Score for %s = %d \n", player1, sum1);
printf("Total Score for %s = %d \n", player2, sum2);


if(sum1!=sum2){     //Determine the winner based on the total scores

if(sum1>sum2){ 
	printf("And the Winner is .....%s! Congratulations!\n",player1);

		}

if(sum2>sum1){
	printf("And the Winner is .....%s! Congratulations!\n",player2);

		}


}



else if (sum1 == sum2) {   //If the total scores are equal, compare individual dice rolls to determine the winner

    for (int i = 0; i < 3; i++) {
        if (firstplayer[i] == secondplayer[i]) {
        // The dice values are the same, so the winner is not decided yet.
            continue;
        } 
        else if (firstplayer[i] > secondplayer[i]) {
            printf("And the Winner is .....%s! Congratulations!\n",player1);
            break;
        } else if (firstplayer[i] < secondplayer[i]) {
            printf("And the Winner is .....%s! Congratulations!\n",player2);
            break;
        }
    }
    
    }
    
    return 0; //shows the successful completion of the program
    
    }
    
