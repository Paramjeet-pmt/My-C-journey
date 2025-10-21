 #include<stdio.h>

int main(){
	int number;
	
	printf("Enter a integer :");
	scanf("%d",&number);
	
	//Handle negative numbers by converting to positive for digit extraction
	
	int tempNumber = number;
	if (tempNumber<0){
		tempNumber = -tempNumber;
	}
	
	printf("Digits of the number :");
	
	//Special case for 0
	if (tempNumber == 0){
		printf("0\n");	
	}else{
		//Extract digit using a loop
		while(tempNumber > 0){
			//Get the last digit 
			int digit = tempNumber % 10;
			//Print the digit 
			printf("%d",digit);
			//Remove the last digit
			tempNumber /= 10;
		}
		printf("\n");
	}
	return 0;
}
