 #include <stdio.h>
 #include <stdlib.h>

 struct queue{
    int size;
    int f ;
    int r ;
    int *arr;
 };

int isfull(struct queue *q){
    if(q->r==q->size-1){
        return 1;
    }
    else return 0;
}


int isempty(struct queue *q){
    if(q->r == q->f){
        return 1 ;
    }
    else return 0;
}

void enqueue (struct queue *q , int data){
    if(isfull(q)){
        printf("This queue is full");
    }
    else{
        q->r = q->r+1;
        q->arr[q->r]=data;
    }   
}


void dequeue (struct queue *q ){
    int a = -1;
    if(isempty(q)){
        printf("the queue is empty");
    }else{
        a=q->arr[q->f];
        q->f++;
        
    }
}
void showqueue(struct queue *q ){
    int a = q->f;

    if(isempty(q)){
        printf("Empty Queue");

    }
    else{
        for(int i=q->f+1; i<=q->r ; i++){
            printf("%d \n",q->arr[i]);
        }

    }
}
 

 
 int main() {
    struct queue q;
    q.size =100;
    q.f=q.r=-1;
    q.arr= (int * )malloc(sizeof(int)*q.size);

    enqueue(&q,10);
    dequeue(&q);
    

    showqueue(&q);



    return 0;
 }