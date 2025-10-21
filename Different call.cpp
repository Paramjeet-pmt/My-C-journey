#include<stdio.h>
 
void printAddress(int n);
void printaddress(int *n);

int main(){
	int n = 4;
	
	printf("%u\n",&n);
	printAddress(n);
	printaddress(&n);
	
	
	return 0;
}

void printAddress(int n){
	printf("%u\n",&n);
}

void printaddress(int *n){
	printf("%u\n", n);
}

//Here address printed by the code is different because her call by value is used in this case a 
//copy will form and all changes will occur in it instead of the real value
