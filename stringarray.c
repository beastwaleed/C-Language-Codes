#include<stdio.h>
int main(){

/*
char name1[]="ALI";
char name2[]="Ahmed";
char name3[]="Ali Ahmned"
*/

char name[3][10]={
	
	"ALI",
	"Ahmed",
	"Ali Ahmed"
	
};

for(int i=0;i<3;i++){

printf("%s ", name[i]);
printf("\n");

}


}
