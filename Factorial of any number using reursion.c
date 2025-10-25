#include<stdio.h>

int fact(int n);

int main(){
	int n;
	
	printf("Enter the number whoose factorial you want to find :");
	scanf("%d",&n);
	
	fact(n);
	printf("The factorial is : %d",fact(n));
	
	return 0;
}

int fact(int n){
	if (n == 0){
		return 1;
	}
	
//	printf("calculate fact of n : %d\n", n); example for stack overflow
	
	int factNm1 = fact(n-1);
	int  factN = factNm1*n;
    return factN;
}
