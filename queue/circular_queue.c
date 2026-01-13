// Circular queue using array


#include <stdio.h>
#include <stdlib.h>
#define MAX 10



struct queue {
    int size=MAX ;
    int f=-1;
    int r=-1
    int arr[10];
} 

struct queue * circular_queue = malloc(sizeof(struct queue)) 


void enqueue(int data){
    if(circular_queue->r+1%circular_queue->size == circular_queue->front)

}

void dequeue(){

}

void display {
    if(f==r)
}


int main() {



    return 0;
}