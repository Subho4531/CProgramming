#include <stdio.h>

int main() {
    int num , org_num ,sq_num , mod_no=0, remainder=0 ;
    
    printf("Enter the number : ");
    scanf ("%d",&num);
    org_num = num;

    sq_num = num*num;

    while(num>0){
        remainder = num%10 ; 
        num/=10;
        mod_no+=remainder;
    }

    if(mod_no == org_num){
        printf("%d is a neon number", org_num);

    }
    else printf("%d is not a neon number", org_num);


    return 0;
}