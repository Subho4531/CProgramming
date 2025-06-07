#include <stdio.h>
void main() {
    int a = 1, b = 2, c = 3, d = 4, result;

    result = (a++ || --b,c++ && --d,b-- && c++ || a-- && ++d, ++a || --c);       // Expression 5

    printf("%d %d %d %d %d\n", a, b, c, d, result);
}
