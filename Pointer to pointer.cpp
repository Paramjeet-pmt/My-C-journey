#include<stdio.h>

int main(){
	float pi ;
	float *ptr;
	float **Ptr;
	
	ptr =&pi;
	Ptr = &ptr;
//	**Ptr = 3.14;

	printf("Enter the value of pi :");
	scanf("%f",*Ptr);	
	
	printf("The value of pi according to you :%f",pi);
	
	return 0;
}
