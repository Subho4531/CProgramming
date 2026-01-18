#include <stdio.h>
#include <stdlib.h>

struct queue{
    int size;
    int f;
    int r ;
    int * arr;
}


int isEmpty(struct queue *q){
    if(q->r==q->f){
        return 1;
    }
    return 0;
}


int isFull(struct queue * q){
    if(q->r==q->size-1){
        return 1;
    }
    return 0;
}


void enqueue(){
    if(isFull(q)){
        print("Queue is full")
    }
    else{
        q->r++;
        q->arr[q->r]=val;
    }
}


int dequeue(struct queue * q){
    int a =-1;
    if(isEmpty(q)){
        printf("Queue is empty");
    }
    else{
        q->f++;
        a=q->arr[q->f];

    }
    return a;
}


int main() {
    struct queue q;
    
    return 0;
}