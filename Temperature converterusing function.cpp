#include<stdio.h>

void Tempconvert(float celsius);

int main(){
	float celsius;
	
	printf("Enter the temperature in Celsius :");
	scanf("%f",&celsius);
	
	Tempconvert(celsius);
}

void Tempconvert(float celsius){
	float fahrenheit = celsius*(9.0/5.0)+32;
	
	printf("The temperature in Fahrenheit :%f",fahrenheit);
}
