#include<stdio.h>
int main(){
float radius;
float volume=0;

printf("Enter Radius of a Sphere: ");
scanf("%f",&radius);

volume=4.0/3.0*(3.14)*(radius*radius*radius);

printf("Volume of Sphere is:%f",volume);

}