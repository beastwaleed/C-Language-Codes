#include<stdio.h>

float angle(float angle1, float angle2){

	return 180-(angle1+angle2);

}

int main(){
float angle1, angle2;

printf("Enter the two angles respectively =\n");
scanf("%f %f",&angle1,&angle2);

printf("The 3rd angle is= %.2f\n",angle(angle1, angle2));

return 0;
}


