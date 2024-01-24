#include<stdio.h>

float temperature(float fh, float celsius){

	return fh=celsius+32*(9.0/5.0);

}

int main(){
float fh, celsius;

printf("Enter the temperature in Celsius = ");
scanf("%f",&celsius);

	printf("The Temperature in Farehneit is = %g\n",temperature(fh,celsius));

return 0;
}
