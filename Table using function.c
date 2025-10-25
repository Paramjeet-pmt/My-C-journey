#include<stdio.h>
 
 void table(int n);
 
int main(){
	int n;
	
	printf("Enter the number whoose Table you want to print :");
	scanf("%d",&n);
	
	table(n);  //Arugument or actual parameter
	
	return 0;
}

void table (int n){   //parameter or foraml parameter
     int table;

	for (int i=1; i<=10; i++){
		
		table = i*n;
		printf("%d\n",table);
	}	
}
