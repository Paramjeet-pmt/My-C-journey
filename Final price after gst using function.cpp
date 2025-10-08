#include<stdio.h>

void actualprice(float value);

int main(){
	int value;
	
	printf("Enter the price of the Product :");
	scanf("%d",&value);
	
	actualprice(value);
	
	return 0;
	
	
}

void actualprice(float value){
	value = value + (0.18*value);
	printf("The final price of product is :%f",value);
	
}
