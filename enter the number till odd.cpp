//taking input from the user till user not enter the odd number
#include<stdio.h>
#include<conio.h>

int main(){
	int i;
	
	do{
		printf("Enter the Number :");
	    scanf("%d",&i);
		printf("The Number you entered is %d :\n",i);
		
		if(i % 2 != 0){
			printf("Error 404 The number you enter is odd");
			break;
		}
		//if while contains 1 that means run every times because 1 means true which did all the condition true
		}while(1);
	
	return 0;
}
