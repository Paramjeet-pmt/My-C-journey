#include<stdio.h>
#include<conio.h>

int main(){
	char c;
	printf("Enter a character:");
	scanf("%c",&c);
	
	//%d display the integer value of a character
	//%c display the actual character
	printf("ASCII value of %c=%d",c,c);
	getch();
	return 0;
	
}
