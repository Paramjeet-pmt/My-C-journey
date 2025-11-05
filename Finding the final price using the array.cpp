#include<stdio.h>

int main(){
	float price[3];
	
	printf("Enter the price of first item: ");
	scanf("%f",&price[0]);
	
	printf("Enter the price of second item: ");
	scanf("%f",&price[1]);
	
	printf("Enter the price of third item: ");
	scanf("%f",&price[2]);
	
	printf("Final price for first item is :\n",price[0]+(0.18*price[0]));
	printf("Final price for second item is :\n",price[1]+(0.18*price[1]));
	printf("Final price for third item is :\n",price[2]+(0.18*price[2]));
	
	return 0;
}
