#include<stdio.h>

int books(int i, int first,int last, int skips,int sum){

	for (first;first<=last;first+=skips+1){
		
	 sum+=first;
		
	}

printf("The Sum of Books are %d \n",sum);

}

int main(){
int i, first,last,skips,sum;

printf("Enter the First Book Number = ");
scanf("%d",&first);

printf("Enter the Last Book Number = ");
scanf("%d", &last);

printf("Enter the Books you want to Skip = ");
scanf("%d",&skips);

books(i,first,last,skips,sum);


}

