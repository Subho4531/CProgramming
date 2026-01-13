/* If a five-digit number is input through the keyboard, write a program to print a new
number by adding one to each of its digits. For example if the number that is input is
12391 then the output should be displayed as 23402.
*/

#include <stdio.h>

int main() {
    int num,new_num=0,factor=1;
    printf("Enter a 5 digit number = ");
    scanf("%d", &num);

    while (num > 0){
        int digit = num %10;
        digit=(digit+1)%10;
        new_num = digit * factor + new_num;
        factor *=10;
        num /=10;
    }   
    
    printf("Increased number = %d",new_num);

    return 0;


}