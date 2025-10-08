//Print the table of a number input by the user
#include<stdio.h>
#include<conio.h>

int main(){
	int n;
	printf("Enter the number whoose table you want :");
	scanf("%d",&n);
	
	//As you can see the below statement is infinite because we don"t addedd any exit statement e.g i<=10
	for (int i=i; ; i++){
		//doing infintite loop into finite using break statements
		if(i == 11){
			break;
		}
		printf("%d \n ",n*i);
	}
	return 0;
	
}
