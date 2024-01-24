#include<stdio.h>
int main(){

int arr[4][3];
int min=arr[0][0];

printf("Enter Values of Matrix\n");
for(int row=0;row<4;row++){
    for(int col=0;col<3;col++){
        printf("Enter Number for %d row & %d Coloum: ",row+1,col+1);
        scanf("%d",&arr[row][col]);

        if(arr[row][col]<min){
            min=arr[row][col];
        }
    
    }
}
printf("\n\aMinimum Number in Array is %d\n", min);

}
