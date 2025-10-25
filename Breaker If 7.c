#include<stdio.h>
#include<conio.h>

int main(){
	int i;
	
	do {
		printf("Enter the Number :");
		scanf("%d",&i);
		printf("The Number you entered is %d :\n",i);
		// using modular operator
		if (i % 7 == 0){
			printf("The Number you enter is either 7 or its multiple");
			break;
		}
	}while(1);
	
	return 0;
}
