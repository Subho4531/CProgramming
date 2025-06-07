#include <stdio.h>

int main() {
    int num;
    int fact = 1;  

    printf("Enter a number: ");
    scanf("%d", &num);

    if (num < 0) {
        printf("Factorial is not defined for negative numbers.\n");
    } 
    else if (num == 0 || num == 1) {
        printf("Factorial of %d is 1\n", num);
    } 
    else {
        for (int i = 1; i <= num; i++) {
            fact *= i;
        }  

        printf("Factorial of %d is %d\n", num, fact);
    }

    return 0;
}