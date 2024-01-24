#include<stdio.h>
int main(){

char name[5][5]={
{'A','D','N','A','N'},
{'U','S','M','A','N'},
{'A','I','S','H','A'},
{'S','O','F','I','A'},
{'A','I','S','H','A'}
};


char search[5];
int match=1;


printf("Enter Name You Want to Search in Array: \n");
printf("Give 1 Space or Press Enter after Each Letter\n");
for(int row=0;row<1;row++){
	for(int col=0;col<5;col++){
	
scanf(" %c",&search[col]);
	}
}

 for (int row=0;row<5;row++) {
        int match=1;
        for (int col=0;col<5;col++) {
            if (search[col]!= name[row][col]) {
                match=0; // Set match to 0 if characters don't match
                break;
            }
        }
	if(match>0){
	printf("Name found on %d Row\n",row+1);
	}

}

}
