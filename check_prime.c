/*
Write a program to check whether a number is prime with as few iterations as possible
*/

#include <stdio.h>

int main() {
    int n;
    printf("Enter the number = ");
    scanf("%d",&n);
    if(n==1){
        printf("Not a prime number");
    }
    else if(n==2||3||5||7){
        printf("Prime number");
    }
    else if (n%2==0||n%3==0||n%5==0||n%7==0){
        printf("Not a prime number");
    }
    else{
        printf("Prime number");
    }
    
    return 0;
}