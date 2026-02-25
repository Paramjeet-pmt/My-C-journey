#include<stdio.h>
#include<conio.h>

int main(){
	float celsius, fahrenheit;
	
	printf("Enter Temperature in celsius:");
	scanf("%f",&celsius);

    fahrenheit=(1.8*celsius)+32;
	printf("\nTemperature in Fahrenheit:%2f\n",fahrenheit);
	getch();
	return 0;	
}
