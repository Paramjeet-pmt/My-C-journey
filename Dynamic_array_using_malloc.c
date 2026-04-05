#include<stdio.h>
#include<stdlib.h>

int main(){
    int n;

    printf("Enter the value of n: ");
    scanf("%d",&n);

    int*ptr = (int*)malloc(n*sizeof(int));

    for(int i=0; i<=n; i++){
        printf("Enter the %d element of the array: ",i);
        scanf("%d",&ptr[i]);
    }


    for(int i = 0; i<=n; i++){
        printf("The %d element of array is %d\n",i,ptr[i]);
    }
}