#include<stdio.h>

void square (int n);

int main(){
	int n;
	printf("Enter the number whoose square you want to find :");
	scanf("%d",&n);
	
	printf("The number is :%d\n",n);
	
	square(n);
	
	printf("The number is :%d\n",n);
	return 0;
}

void square (int n){
	n = n*n;
	
	printf("The square is :%d\n",n);
}
