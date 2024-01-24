#include<stdio.h>
float area(float radius,float pi);
float per(float radius, float pi);

int main(){
	float radius;
	const float pi = 3.14;
	
	printf("Enter the radius = "); 
	scanf("%g", &radius);
	
	area(radius, pi);
	per(radius, pi);	
	return 0;
}


float area(float radius,float pi){
	
	printf("Area is = %g\n", pi*radius*radius);

}

float per(float radius, float pi){

	printf("Area is = %g\n", 2*pi*radius);

}
