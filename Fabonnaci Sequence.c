#include<stdio.h>

int fib(int n);

int main(){
	int n;
	
	printf("Enter the number of fibonnaci sequence you want to calculate :");
	scanf("%d",&n);
	
	printf("%d",fib(n));
	
}

int fib(int n){
	if (n==0){
		return 0;
	}
	if (n==1){
		return 1;
	}
	
	int fibNm1 = fib(n-1);
	int fibNm2 = fib(n-2);
	int fibN = fib(n-1)+fib(n-2);
	
// To print all the terms in which this recursive function is used	
//	printf("The fibonnaci of %d is :%d\n",n,fibN);

	
	return fibN;
}
