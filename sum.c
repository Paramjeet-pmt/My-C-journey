#include<stdio.h>
#include<conio.h>

int main(){
	
	int num1,num2,sum;
	//Prompt the user to enter the first number
	printf("Enter the first number:");
	scanf("%d",&num1);//Read the first integer from the user and store it in num1
	
	//Prompt the user to enter the second number
	printf("Enter the second number:");
	scanf("%d",&num2);//Read  the second integer from the user and store it in num2
	
	sum=num1+num2;//Calculate the sum of num1 and num2 and store it in sum
	
	//Display the result 
	printf("sum of %d and %d is %d\n",num1, num2, sum);
	
	getch();
	return 0;//Indicate successful program execution	
}
