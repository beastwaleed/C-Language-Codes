#include<stdio.h>

float area(float height,float base){

	return (height*base)/2;
}

int main(){
float height, base;

printf("Enter the base of the Triangle = ");
scanf("%f",&base);

printf("Enter the height of the Traingle = ");
scanf("%f",&height);

printf("The Area of the Traingle is = %.2f\n",area(height, base));

return 0;
}
