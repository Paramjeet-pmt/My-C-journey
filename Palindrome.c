#include<stdio.h>

int main(){
    int n, temp, rev = 0, digit;

    printf("Enter a number :");
    scanf("%d",&n);

    temp = n;
    while (temp >0){
        digit = temp %10;
        rev = rev *10 + digit;
        temp = temp /10;
    }
    if(rev ==n){
        printf("%d is a Palindrome number\n",n);
    }else{
        printf("%d is not a Palindrome number\n",n);
    }
    return 0;
}