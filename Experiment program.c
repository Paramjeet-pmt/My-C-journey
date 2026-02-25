#include<stdio.h>

int main(){
	int rows,i,j,k;
	
	printf("Enter the number of rows:");
	scanf("%d",&rows);
	
	for(i=0; i<=rows; i++){
		//For printing space
		for(j=i; j<=rows-1; j++){
			printf(" ");
		}
		//for printing digits
		for(k=1; k<=4*i-1; k++){
			printf("%d",(rows-i)%10);
		}
		printf("\n");
	}
	return 0;
}
