#include <stdio.h>


int main(){

    int num, reversed_num=0, original_num,remainder;

    printf("Enter a number:");
    scanf("%d",&num);
    
    num=original_num;
    
    while (reversed_num>0){
        num = num/10;
        remainder = num%10; 
        reversed_num = reversed_num*10+remainder;
    }


    if(original_num == reversed_num){
        printf("Pallindrome\n");
    }
    else{
        printf("Not a pallindrome\n");
    }

    return 0;
}