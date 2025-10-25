#include<stdio.h>
#include<conio.h>

int main(){
	int a,i,n;
	
	//Chosing from where to start
	printf("Enter the start point :");
	scanf("%d",&a);
	
	//Chosing the limit
	printf("Enter the limit");
	scanf("%d",&n);
	
	//Applying the loop
	printf("All Odd Numbers \n");
	for(i=a; i<=n; i++){
		if (i % 2 == 0 ){
			continue;
		}
		
		printf(" %d", i);
	}
	return 0;
}
