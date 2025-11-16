#include<stdio.h>

int main(){
	int a,b,c;
	
	printf("Enter Three Number:");
	scanf("%d %d %d",&a,&b,&c);
	
	//Here if a is greater then b then we swap to put small number number in a
	if(a>b){
		int t = a;
		a = b;
		b = t;
	}
	
	//Here if b is greater then c then we swap to put small number in b
	if(b>c){
		int t = b;
		b = c;
		c = t;
	}
	
	printf("Ascending order :\n%d\n%d\n%d\n",a,b,c);
	printf("Descending order :\n%d\n%d\n%d\n",c,b,a);
	
	return 0;
}
