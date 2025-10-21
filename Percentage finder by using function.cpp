#include<stdio.h>

int perc(int sc, int math, int sst);

int main(){
	int sc, math, sst, percentage;
	
	printf("Enter the marks of science :");
	scanf("%d",&sc);
	
	printf("Enter the marks of math :");
	scanf("%d",&math);
	
	printf("Enter the marks of sst :");
	scanf("%d",&sst);
	
	if (sc<=100 && math<=100 && sst<=100){
		printf("The percentage is :%d",perc(sc,math,sst));
//		percentage=(sc+math+sst)/3;
//		printf("The percentage is :%d",percentage);
	}else {
		printf("Please enter a valid numbers");
	}
}

int perc(int sc, int math, int sst){
	return (sc+math+sst)/3;
}
