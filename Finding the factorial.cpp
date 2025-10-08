#include<stdio.h>
#include<conio.h>

int main (){
	int i,j,factorial=1;
	printf("Tell the number whoose factorial you want to find :");
	scanf("%d",&i);
	
	for (j=1; j<=i; j++){
		factorial = factorial*j;
	}
	printf("The Factorial of %d :",factorial);
	return 0;
	
}
