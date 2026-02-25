#include<stdio.h>

void HW(int count);

int main(){
	HW(5);
	
	return 0;
}

void HW(int count){
	if (count == 0){
		return;
	}
	printf("\tHello, World\n");
	HW(count-1);
}
