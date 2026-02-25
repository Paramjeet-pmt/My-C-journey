#include<stdio.h>
#include<conio.h>

int main(){
	//sum of the natural numbers
	int n , i;
	printf("Enter the Number of natural number");
	scanf("%d",&n);
	
	int sum = 0;
	for (i=1; i<=n; i++){
		sum= sum+i; //sum +=i
	}
	
	printf("%d\n",sum);
	
	//For printing the natural number in the reverse
	/*In the loop if we declare any varriable the its life till the loop end not
	till the end of program*/ 
	
	for (int i=n; i>=1; i--){
		printf("%d",i);
	}
	
	//if we conclude in the same loop
	// here i calculate sum and j will print the number in the reverse order
	for (int i=1, j=n; i<=n&& j>=1; i++,j--){
		sum= sum+j;
		printf("%d\n",j);
	}
	
	
	
	return 0;
	
}
