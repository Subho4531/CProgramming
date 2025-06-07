#include <stdio.h>

int main() {
    int a , b, c;
    printf("Enter the first number");
    scanf("%d", &a);
    printf("Enter the second number");
    scanf("%d", &b);
    a=a+b;
    b=a-b;
    a=a-b;
    printf("After swapping, first number = %d\n", a);
    printf("After swapping, second number = %d\n", b);


    return 0;
}