#include<stdio.h>

int main(){
	int n,i,rev=0,digit,temp;
	
	printf("Enter the Number whoose digit you want to count: ");
	scanf("%d",&n);
	
	temp = n;
	
	while(temp != 0){
		digit = temp % 10; 
		rev = (rev*10)+digit;
		temp = temp/10;
	}
	
	printf("The Reverse of the %d is %d\n",n,rev);
	
	
	
	return 0;
	
}
