#include<stdio.h>
#include<math.h>

void Helloworld( int count);

int main(){
	
	Helloworld(5);
	
	
	return 0;  //return 0 return o 
}

//Recursive function
void Helloworld(int count){
	if (count == 0){
		return ;  //while return  show void
	}
	printf("Hello,world");
    Helloworld(count-1);
}
