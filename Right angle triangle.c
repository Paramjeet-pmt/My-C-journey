#include<stdio.h>

int main(){
	int i,j,rows;

	printf("Enter the numbers of rows :");
	scanf("%d",&rows);
	
	for(i=1; ; i++){
		for(j=1; j<=i; j++){
			printf("*");
		}
		printf("\n");
		
	}
}
