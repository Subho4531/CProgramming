/*
A library charges a fine for every book returned late. For first 5 days the fine is 50 paise,
or 6-10 days fine is one rupee and above 10 days fine is 5 rupees. If you return the book
after 30 days your membership will be cancelled. Write a program to accept the number
of days the member is late to return the book and display the fine or the appropriate
message.
*/

#include <stdio.h>

int main() {
    int days;
    float fine=0;
    printf("Enter the no of days the member is late to return books = ");
    scanf("%d",&days);
    for (int i = 0; i < days; i++){
        if(i<=5){
            fine=fine+0.5;
            continue;
        }
        else if(i>5 && i<=10){
            fine=fine+1 ;
            continue;
        }
        else if(i>10 && i<=30){
            fine=fine+5;
            continue;
        }
        else{
            printf("Membership Cancelled");
            break;
        }
    }
    printf("Fine = %.2f",fine);
    
    
    return 0;
}