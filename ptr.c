#include<stdio.h>
int main(){

int arr[2][2]={{1,2},{3,4}};
int *ptr;

*ptr=arr[0][0];

for(int row=0;row<2;row++){
ptr++;
for(int col=2;col>0;col--){


ptr=&arr[row][col];

}

}

for(int i=0;i<2;i++){
for(int j=0;j<2;j++){

	printf("%d ",*ptr);
	
		}
			}


}

