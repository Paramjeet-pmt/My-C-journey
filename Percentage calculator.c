#include<stdio.h>

int main(){
	int i,subject, marks[5];
	int total = 0;
	
	for(i =0; i<=4; i++){
		scanf("%d",&marks[i]);
		subject = i;
	}
	
	for (i = 0; i<=4; i++) {
        total += marks[i];
    }

	
	printf("The Percentage is %d",;
	
	return 0;
	
}
