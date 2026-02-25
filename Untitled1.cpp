#include<stdio.h>

int main(){
	int a, j, k;
	
	printf("Enter the number of rows :");
	scanf("%d",&a);
	
	for(int i=1; i=a; i++){
		for(int j =1; j=i; j++){
			printf("*\n");
		}
		for (int k=1; k=i-j; k++){
			printf(" ");
		}
	
		
	}
	
	return 0;
	
}
