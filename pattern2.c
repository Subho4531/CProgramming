// Write a program to print the following pattern
// 1
// 2 3
// 4 5 6
// 7 8 9 10
#include <stdio.h>

int main() {
    int n=1;
    for(int i=0;i<4;i++){
        for(int j= 0;j<=i;j++){
            printf("%d ",n);
            n=n+1;
        }
        printf("\n");
    }
    return 0;
}
