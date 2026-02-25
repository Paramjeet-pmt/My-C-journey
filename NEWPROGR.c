#include<stdio.h>

int main(){
	int n,i = 0,fabNm2=0,fabNm1=1,fabN=0;
	
	printf("Enter the Number of term of Fibonacci series: ");
	scanf("%d",&n);
	
	printf("The Fibanonaci Series is :\n");
	if(n >= 1){
		fabN = 0;
	}
		printf("%d\n",fabN);
	if(n >= 2){
		fabN = 1;
	}
		printf("%d\n",fabN);
	
	for( i = 3; i<=n; i++){
		fabN = fabNm2 + fabNm1;
		printf("%d\n",fabN);
		fabNm2 = fabNm1;
		fabNm1 = fabN;
	}
	
	
	
	return 0;
}
