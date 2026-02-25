#include<stdio.h>
#include<math.h>

float squareArea(float side);
float circleArea(float radius);
float rectangleArea(float l, float b);

int main(){
	int shape;
	float side,radius,l,b;
	
    printf("ForSquare 1\nCircle 2\nRectangle 3\n");
    printf("Enter the shape");
    scanf("%d",&shape);
    
    if (shape == 1){
    	printf("Enter the side of square :");
    	scanf("%f",&side);
    	
    	squareArea(side);
    	printf("%f",squareArea(side));
	} else if (shape == 2){
		printf("Enter the radius of the circle :");
		scanf("%f",&radius);
		
	    circleArea(radius);
	    printf("%f",circleArea(radius));
	}else if(shape == 3){
		printf("Enter the lenght of the rectangle :");
		scanf ("%f",&l);
		 
		printf("Enter the breathe of the rectangle :");
		scanf("%f",&b);
		
		rectangleArea(l, b);
		printf("%f",rectangleArea(l,b));
			}
		else{
			printf("Enter a Valid input");
		}
	
	return 0;
  	
}

float squareArea(float side){
	return side*side;
}

float circleArea(float radius){
	return 3.14*radius*radius;
}

float rectangleArea(float l, float b){
	return l*b;
}


