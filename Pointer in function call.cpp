#include<stdio.h>


void square (int n);
//Here * is used to take the address/pointer of n
void _square (int* n);

int main(){
	int n;
	
	printf("Enter the Number :");
	scanf("%d",&n);
	
	square(n);
	printf("The Number after the call by value :%d\n",n);
	_square(&n);
	printf("The Number after call by reference :%d\n",n);
	
	return 0;;
}

void square (int n){
	n = n*n;
	
	printf("The square is :%d\n",n);
}

void _square(int* n){
	*n = (*n)*(*n);
	
	printf("The square is :%d\n",*n);
}


