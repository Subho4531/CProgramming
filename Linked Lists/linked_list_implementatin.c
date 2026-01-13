#include <stdio.h>
#include <stdlib.h>

struct node{
    int data;
    struct node* next;
};

int main() {
    int choice =1 ;
    struct node * head = NULL,* newnode , *tempnode;
    
    while(choice){
        newnode = (struct node *)malloc(sizeof(struct node));

        printf("Enter the data");
        scanf("%d",&newnode->data);
        newnode->next = NULL;

        if(head == NULL){
            head = newnode;
        }
        else{
            tempnode = head;

            while(tempnode->next != NULL){
                tempnode = tempnode -> next;
            }
            tempnode->next = newnode;
        }

        printf("Enter 1 to continue : ");
        scanf("%d",&choice);
    }

    tempnode = head;
    while(tempnode != NULL){
        printf("%d -> ",tempnode->data);
        tempnode = tempnode ->next;

    }


    
    return 0;
}