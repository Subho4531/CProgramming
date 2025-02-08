/*
Write a C program to perform addition, subtraction, multiplication and division of two
numbers by using switch case
*/

#include <stdio.h>

int main() {
    int num1, num2 ;
    char choice;
    printf("Enter the first number = ");
    scanf("%d", &num1);
    printf("Enter the second number = ");
    scanf("%d", &num2);
    printf("Enter the operation(+,-,*,/) = ");
    scanf(" %c", &choice);
    if(choice == '+'){
        printf("Addition = %d",num1+num2);
}
    else if(choice == '-'){
        printf("Subtraction = %d",num1-num2);
}
    else if(choice == '*'){
        printf("Multiplication = %d",num1*num2);
}
    else if(choice == '/'){
        printf("Division = %d",num1/num2);
}
    else{
        printf("Invalid operation");
}
    return 0;
}