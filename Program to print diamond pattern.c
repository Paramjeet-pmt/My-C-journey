#include<stdio.h>

int main(){
    int i,j,rows,space;
     
    printf("Enter the number of rows fot the diamond (half diamond):");
    scanf("%d",&rows);

    //Upper half of the diamond
    for (i=1; i<=rows; i++){
        //Printing leading spaces
        for (space=1; space<=(rows-i); space++){
            printf(" ");
        }
        //Print asterisks
        for (j=1; j<=(2*i-1); j++){
            printf("*");
        }
        printf("\n");
    }
    //Lower half of the diamond
    for (i=rows-1; i>=1; i--){
        //Print leading spaces
        for (space=1; space<=(rows-i); space++){
            printf(" ");
        }
        //print asteristks
        for(j=1; j<=(2*i-1); j++){
            printf("*");
        }
        printf("\n");
    }

    return 0;
}