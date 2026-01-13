 #include <stdio.h>
 #include <stdlib.h>

 struct node
 {
    int data;
    struct node *next;
 };
 
 struct node* insertatfirst(struct node *head , int data){
    struct node *ptr = (struct node *)malloc(sizeof(struct node));
    ptr->next = head;
    ptr -> data =data;
    return ptr;
 }


struct node * insertatend(struct node *head,int data){
   struct node *ptr = (struct node *)malloc(sizeof(struct node));
   ptr -> data =data ;
   struct node *p = head;

   while (p->next != NULL){
      p=p -> next;
   }

   p -> next = ptr ;
   ptr ->next = NULL;
   return head; 

   
}


struct node * insertatindex(struct node *head , int data , int index){
   struct node *ptr = (struct node *)malloc(sizeof(struct node));
   ptr-> data = data ;
   struct node *p = head;

   for ( int i = 0 ; i < index-1; i++){
      p = p -> next;
   }

   ptr -> next = p -> next ;
   p-> next = ptr;


   return head;

}




void traversal(struct node * head){
while(head!= NULL){
   printf("%d \n",head -> data);
   head = head -> next;

}
}

 
 int main() {

   struct node *head = (struct node *)malloc(sizeof(struct node));
   struct node *second = (struct node *)malloc(sizeof(struct node));
   struct node *third = (struct node *)malloc(sizeof(struct node));

   head -> data = 7;
   head -> next = second;

   second -> data = 11 ;
   second -> next = third;


   third -> data = 25;
   third -> next = NULL;
   
   printf("Before Insertion \n");
   traversal(head);
   printf("\n after Insertion \n");
   insertatindex(head,5,2);
   traversal(head);
   

     
     return 0;
 }