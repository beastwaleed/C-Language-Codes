#include<stdio.h>
int main(){

int marks=0;
int myarray[5];
printf("Enter Marks of 5 Subjects = ");
for(int i=0; i<5;i++){
  scanf("%d", &myarray[i]);
  marks=marks+myarray[i];
	
	}
	
	printf("Total Marks Obtained = %d\n",marks);

int avg=marks/5;
printf("Average Marks = %d\n",avg);



}
// 2 4 6 8 1 3 5 7 10 16

