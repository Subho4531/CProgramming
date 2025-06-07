#include <stdio.h>
// #include <vector.h> // Removed as it is not a standard C library header

int main() {
    int a = 10;
    printf("%d",*(&a));
}