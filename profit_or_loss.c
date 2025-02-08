/*
If cost price and selling price of an item is input through the keyboard, write a program
to determine whether the seller has made profit or incurred loss. Also determine how
much profit he made or loss he incurred.
*/

#include <stdio.h>

int main() {
    float cp,sp,profit,loss;
    printf("Enter the cost price = ");
    scanf("%f",&cp);
    printf("Enter the selling price = ");
    scanf("%f",&sp);
    if(sp>cp){
        profit=sp-cp;
        printf("Profit = %.2f",profit);
    }
    else{
        loss=cp-sp;
        printf("Loss = %.2f" ,loss);
    }

    return 0;
}