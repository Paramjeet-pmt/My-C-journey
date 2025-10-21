
#include<stdio.h>

// Call by value 
void swapv(int a, int b);
//call by reference
void swapr(int* a, int* b);

int main(){
	int a, b;
	
	printf("Enter the value of a :");
	scanf("%d",&a);
	
	printf("Enter the value of b :");
	scanf("%d",&b);
	
	swapv(a, b);
	printf("Now after swap the value of a and b are %d and %d in the main function\n",a,b);
	
	swapr(&a,&b);
	printf("Now after swap the value of a and b are %d and %d in the main function\n",a,b);
	
	
	return 0;
}

void swapv(int a, int b){
	int t = a;
	a = b;
	b = t;
	
	printf("Now after swap the value of a and b are %d and %d\n",a,b);
}

void swapr(int *a, int *b){
	//Assign value of a the t
	int t =*a;
	//Assign value of b to a
	*a = *b;
	//Assign value of b to t
	*b = t;
	
	printf("Now after swap the value of a and b are %d and %d\n",*a,*b);	
}
