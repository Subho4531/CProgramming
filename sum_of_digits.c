// Write a C program to find the sum of digits of a number taken from the user

#include <stdio.h>

int main() {
    int num, sum=0;
    printf("Enter a number:");
    scanf("%d", &num);
    while(num!=0){
        sum +=num%10;
        num/=10;
    }
    printf("Sum of digits = %d",sum);
    return 0;
}