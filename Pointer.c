#include<stdio.h>

int main(){
	//declaring the pointer ptr
	int *ptr;
	//delcaring the variable x
	int x;
	
	//assign the address of variable x to pointer ptr
	ptr =&x;
	// By this we adding the value at that address which is store by the ptr that is x
	//Simply we are putting value at that address(which is store by pointer) 
	*ptr = 0;
	
	printf("x= %d\n",x); //value at x
	printf("*ptr = %d\n",*ptr);//value at that addrress stored by ptr
	
	*ptr += 5;//means add the value to 5 at that address stored by ptr
	printf("x= %d\n",x);//print the value of x
	printf("*ptr = %d\n", *ptr);//print the value store at the address
	
	(*ptr)++;//increase the value by 1 at that address stored by ptr
	printf("x=%d\n",x);
	printf("*ptr=%d\n", *ptr);
	
	return 0;
}
