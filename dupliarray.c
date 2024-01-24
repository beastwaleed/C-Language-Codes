#include<stdio.h>
int main(){

int myarray[10];
int num;
int duplicate;

printf("Enter 3 Numbers :\n");

for(int i=0;i<3;i++){
	printf("Number - %d = ",i);
	scanf("%d", &myarray[i]);
}
    for(int i=0;i<3;i++){
       for(int j=i+1;j<3;j++){
	if(myarray[i]==myarray[j]){
	
	duplicate++;
	break;
	
	}
	
	}

}

printf("The Total number of Duplicate elements are = %d \n", duplicate);

return 0;
}
