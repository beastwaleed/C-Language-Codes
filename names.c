#include<stdio.h>
int main(){

FILE *ptr;
ptr=fopen("names.txt","r");
char name[30];

for(int i=0;i<4;i++){

    name[i]=fgetc(ptr);

}

for(int i=0;i<4;i++){
	printf(" %c",name[i]);
}

fclose(ptr);
return 0;
}
