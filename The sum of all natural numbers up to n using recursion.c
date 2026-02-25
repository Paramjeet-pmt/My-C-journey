#include<stdio.h>

int sum(int n);

int main(){
	int n;
	printf("Enter the nth term :");
	scanf("%d",&n);
	
	sum(n);
	printf("sum is :%d",sum(n));
	return 0;
}

int sum(int n){
	
	if (n == 1 ){
		return 1;
	}
	int sumNm1 = sum(n-1); //find sum of n minus 1 
	int sumN = sumNm1 + n;
	return sumN; //return the value
}

