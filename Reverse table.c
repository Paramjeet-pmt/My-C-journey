#include<stdio.h>
#include<conio.h>

int main(){
	int n,i,table;
	printf("Enter the Number whoose reverse table you want to find :");
	scanf("%d",&n);
	
	printf("The Reverse table of %d :\n",n);
	for (i=10; i>=1; i--){
		table =i*n;
		printf("%d \n",table);
	}
	
	return 0;
}
