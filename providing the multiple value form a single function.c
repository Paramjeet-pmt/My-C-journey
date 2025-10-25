//In this program we learn how call by reference help us to get multipe values
//  form a function call which generally return a single value using return
#include<stdio.h>


void doWork(int a, int b, int *sum, int *product, int *average);

int main(){
	int a, b;
	
	printf("Enter the value of a :");
	scanf("%d",&a);
	
	printf("Enter the value of b :");
	scanf("%d",&b);
	
	int sum, product, average;
	doWork(a,b, &sum, &product, &average);
	printf(" The sum is :%d\n The product is :%d\n The average is :%d",sum,product,average);
	
	return 0;
}

void doWork(int a, int b, int *sum, int *product, int *average){
	*sum = a+b;
	*product = a*b;
	*average = (a+b)/2;
}
