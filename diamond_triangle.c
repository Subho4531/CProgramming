#include <stdio.h>

int diamond(n){
    

    for (int i=0;i<=5;i++){
        for (int j=0;j<i;j++){
            printf("*");

    }
    printf("\n");

}
}


int main() {
    diamond(5);
    return 0;
}