/*
A cashier has currency notes of denominations 10, 50 and 100. If the amount to be
withdrawn is input through the keyboard in hundreds, find the total number of currency
notes of each denomination the cashier will have to give to the withdrawer.
*/

#include <stdio.h>

int main() {
    int amount, hundreds, fifties, tens;
    printf("Enter the amount to be withdrawn in hundreds = ");
    scanf("%d", &amount);
    hundreds = amount/100;
    amount%=100;
    fifties = amount/50;
    amount%=50;
    tens = amount/10;
    printf("Currency notes of 100 = %d\n", hundreds);
    printf("Currency notes of 50 = %d\n", fifties);
    printf("Currency notes of 10 = %d\n", tens);
    return 0;
}