#include<stdio.h>
int main(){

int arr[3][3];

for(int row=0;row<3;row++){

int sum=0;

for(int col=0;col<3;col++){
	printf("Enter Element for %d Row and %d Coloum= ",row+1,col+1);
	scanf("%d", &arr[row][col]);
	
	sum+=arr[row][col];


}

printf("Sum of Row %d is %d\n",row+1, sum);
}

}
