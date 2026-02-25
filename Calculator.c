//This is a simple calculator form my side 
//Author : Paramjeet

#include<stdio.h>


int main(){
	
	char symbol;
	float num1, num2, result;

	printf("   ________________\n");
	printf("  |  CALCULATOR   |\n");
	printf("  |_______________|\n");
	
	printf("Enter the first number :");
	scanf("%f",&num1);
	
	printf("Enter an operator(+, -, *, /)");
	scanf(" %c", &symbol);
	
	printf("Enter the second number :");
	scanf("%f",&num2);
	
	switch(symbol){
		case '+':
		result = num1+num2;
		break;
		
		case '-':
		if (num1<num2){
			printf("The num1 is smaller then num2 :");
		}
		result = num1 - num2;
		break;
		
		case '*':
		result = num1*num2;
		break;
		
		case '/':
		if (num2 != 0){
		result = num1/num2;	
		}else{
			printf("Error Division by zero!\n");
		}
		break;
		
		default:
			printf("Invalid operator!\n");
	}
	printf("Result :%2f\n",result);
	
	return 0;	
}
