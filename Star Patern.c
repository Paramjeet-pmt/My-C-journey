#include<stdio.h>

int main(){
	int age = 22;
	int *ptr = &age;
	
	printf("The value of ptr %u",ptr);
	
	*ptr--;
	
	printf("The new age is %u",ptr);
	
	return 0; 
}
