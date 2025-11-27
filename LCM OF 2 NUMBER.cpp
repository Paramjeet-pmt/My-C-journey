#include<stdio.h>

int main(){
	int a,b,i,gcd=1,lcm;
	
	printf("Enter 2 Number: ");
	scanf("%d %d",&a,&b);
	
	if(a>b){
		for(i=1; i<=b; i++){
			if( a % i == 0 && b % i== 0){
				gcd = i;
			}
			
		}
	}else{
		for(i=1; i<=a; i++){
			if( a % i == 0 && b % i== 0){
				gcd = i;
		}
	}
}


	lcm = (a * b)/gcd;
	printf("The GCD is %d",gcd);
	printf("The LCM is %d",lcm);

	return 0;
}
