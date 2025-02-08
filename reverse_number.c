/*
If a five-digit number is input through the keyboard, write a program to reverse the
number.
*/


#include <stdio.h>

int main() {
    int num, reverse=0;
    printf("Enter a 5 digit number = ");
    scanf("%d", &num);
    while(num>0){
        reverse=reverse*10 + num%10;
        num=num/10;
    }
    printf("Reversed number = %d",reverse);
    return 0;
}
