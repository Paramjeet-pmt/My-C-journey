#include<stdio.h>
#include<conio.h>

int main(){
	int n , i;
	printf("Enter the Number of natural number");
	scanf("%d",&n);
	
	int sum = 0;
	for (i=1; i<=n; i++){
		sum= sum+i; //sum +=i
	}
	
	printf("%d",sum);
	
	return 0;
	
}
