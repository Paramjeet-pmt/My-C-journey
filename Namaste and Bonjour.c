#include<stdio.h>
#include<conio.h>

void printNamaste();
void printBonjour();

int main(){
	int i;
	char country;
	printf("Are yoy belongs to india or french (i/f) :");
	scanf("%c",&country);
	
	if (country == 'i'){
		printNamaste();
	}
	else {
		printBonjour();
	}
	return 0;
		
}


void printNamaste(){
	printf("Namaste");
}

void printBonjour(){
	printf("Bonjour");
}
