#include <stdio.h>



int main() {
    int num , org_num , sum=0, remainder;
    printf("Enter a number ");
    scanf("%d",&num);
    org_num=num;

    //Extraction and squaring of digits
    while(num!=1 && num!=4){
        sum=0;
        while(num>0){
            remainder = num%10;
            num/=10;
            sum+=remainder*remainder;
            
        }

        num = sum;
        
    }
    
    
    if(sum==1){
        printf("is an perfect number");
    }
    else{
        printf("Not an perfect number");
    }

    return 0;
}