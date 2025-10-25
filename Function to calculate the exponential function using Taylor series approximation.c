#include<stdio.h>
#include<math.h>

//function, although it can be implemented manually

//Function to calculate the exponential function using Taylor series approximation

double taylor_exp(double x,int n_terms);

int main(){
	//The value of x for e^x
	double x_value =2.0;
	
	//Number of terms to include in the approximation
	int num_terms = 15;
	
	printf("Approximation of e^2%f with %d terms : %1f\n",x_value,num_terms,taylor_exp(x_value,num_terms));
	
	return 0;
	
}

double taylor_exp(double x,int n_terms){
	
	//First term(x^0/0!)is always 1
	double sum = 1.0;
	
	//Current term value 
	double term = 1.0;
	int i;
	
	for(i=1; i<n_terms; i++){
		//Calculate the next term efficiently
		term = term*x/i;
		
		sum += term;
	}
	
	return sum;
}
