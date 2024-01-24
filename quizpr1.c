#include<stdio.h>
int main(){

double sq_arr[25];
double alpha[50];
double cube_arr[25];


for(int i=0;i<25;i++){

sq_arr[i]=i*i;

printf("%lg\t",sq_arr[i]);

}

printf("\n");
for(int i=25;i<50;i++){

cube_arr[i]=i*i*i;

printf("%lg\t", cube_arr[i]);

}
return 0;
}


