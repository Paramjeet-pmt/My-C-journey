#include<stdio.h>

int main(){
	int i,n,temp,count=0;
	
	printf("Enter the Number whoose digit you want to count: ");
	scanf("%d",&n);
	
	temp = n;
	
	for(i=1; temp %10 != 0; i++){
		temp = temp/10;
		count++;
	}
	printf("The Number of digit in %d  is %d",n,count);
	
	return 0;
	
}
