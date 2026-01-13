#include <stdio.h>
#include <stdlib.h>



struct node {
    int data;
    struct node * next;
};

struct node * head = NULL;


void insertAtFirst(int data) {
    struct node *ptr = (struct node *)malloc(sizeof(struct node));
    
    ptr->data = data;
    ptr->next = head;
    head = ptr;
    printf("Node inserted at the beginning.\n");
}

void insertAtEnd(int data) {
    struct node *ptr = (struct node *)malloc(sizeof(struct node));
    
    ptr->data = data;
    ptr->next = NULL;

    if (head == NULL) {
        head = ptr;
        printf("Node inserted at the end.\n");
        return;
    }

    struct node *p = head;
    while (p->next != NULL) {
        p = p->next;
    }
    p->next = ptr;
    printf("Node inserted at the end.\n");
}

void insertAtIndex(int data, int index) {
    if (index < 0) {
        printf("Invalid index. Index cannot be negative.\n");
        return;
    }
    if (index == 0) {
        insertAtFirst(data);
        return;
    }

    struct node *ptr = (struct node *)malloc(sizeof(struct node));
    ptr->data = data;

    struct node *p = head;
    int i = 0;
    while (i < index - 1 && p != NULL) {
        p = p->next;
        i++;
    }

    if (p == NULL) {
        printf("Invalid index. The index is out of bounds.\n");
        free(ptr); // Free the allocated node
        return;
    }
    
    ptr->next = p->next;
    p->next = ptr;
    printf("Node inserted at index %d.\n", index);
}

void traversal() {
    if (head == NULL) {
        printf("Linked list is empty.\n");
        return;
    }
    struct node *temp = head;
    printf("Linked list elements:\n");
    while (temp != NULL) {
        printf("%d -> ", temp->data);
        temp = temp->next;
    }
    printf("NULL\n");
}

void deleteFromBeginning() {
    if (head == NULL) {
        printf("Linked list is already empty. Nothing to delete.\n");
        return;
    }
    struct node *temp = head;
    head = head->next;
    free(temp);
    printf("Node deleted from the beginning.\n");
}

void deleteFromEnd() {
    if (head == NULL) {
        printf("Linked list is already empty. Nothing to delete.\n");
        return;
    }
    if (head->next == NULL) { 
        free(head);
        head = NULL;
        printf("The only node has been deleted.\n");
        return;
    }

    struct node *p = head;
    struct node *q;
    while (p->next->next != NULL) {
        p = p->next;
    }
    q = p->next;
    p->next = NULL;
    free(q);
    printf("Node deleted from the end.\n");
}


void deleteElementData (int data){
    if(head->data == data){
        deleteFromBeginning();
        return;
    }
    struct node * ptr = head;
    struct node * temp;
    while(ptr->next->next != NULL){
        if(ptr->next->data == data){
            temp =ptr->next;
            ptr->next = temp->next;
            free(temp);
            return;
        }
        ptr=ptr->next;
    }
    if(ptr->next->data == data){
        temp = ptr->next;
        ptr->next = NULL;
        free(temp);
        return;

    }
    printf("Element not found \n");

}

int main() {
    int choice;
    int element, position;
    printf("Linked List Operations\n");
    
    while(1) {
        printf("\n--- Menu ---\n");
        printf("1. Insert a node at the beginning\n");
        printf("2. Insert a node at the end\n");
        printf("3. Insert a node at a specific index\n");
        printf("4. Delete a node from the beginning\n");
        printf("5. Delete a node from the end\n");
        printf("6. Display the linked list\n");
        printf("0. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                printf("Enter the element to insert: ");
                scanf("%d", &element);
                insertAtFirst(element);
                break;
            case 2:
                printf("Enter the element to insert: ");
                scanf("%d", &element);
                insertAtEnd(element);
                break;
            case 3:
                printf("Enter the element to insert: ");
                scanf("%d", &element);
                printf("Enter the index to insert at: ");
                scanf("%d", &position);
                insertAtIndex(element, position);
                break;
            case 4:
                deleteFromBeginning();
                break;
            case 5:
                printf("Enter the element");
                scanf("%d",&element);
                deleteElementData(element);
                break;
            case 6:
                traversal();
                break;
            case 0:
                printf("Exiting...\n");
                exit(0);
            default:
                printf("Invalid choice. Please enter a valid option.\n");
                break;
        }
    }
    return 0;
}