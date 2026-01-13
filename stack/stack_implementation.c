
#include <stdio.h>
#include <stdlib.h>

#define MAX 5

int top = -1;
int stack[MAX];


int main() {
    int choice ;
    while(1){
        printf("1. Push \n");
        printf("2. Pop \n");
        printf("3. Display \n");
        printf("4. Exit \n");
        scanf("%d",&choice);

        switch (choice)
        {
            case 1:
            push();
            case 2:
            pop();
            case 3:
            display();
            case 4 :
            exit(1);
            default:
            printf("Enter a valid choice!");
        }
    }

    
    return 0;
}
void push(){
    if(top = MAX-1){
        printf("Overflow");
    }
    int element ; 
    printf("Enter the element to push");
    
    scanf("%d",&element);
    top+=1;
    stack[top] = element;
    
    
}

void pop (){
    if(top < 0){
        printf("Underflow");
    }else{
        printf("%d popped out from stack",stack[top]);
        top-=1;
    }
}

void display(){
    for (int i ; i<=top;i++){
        printf("%d",stack[i]);
    }

}