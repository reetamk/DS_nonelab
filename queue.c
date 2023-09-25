#include <stdio.h> 
#include <stdlib.h>

struct node {
    int data;
    struct node * next;
};

struct node * front;
struct node * rear;

void insert(struct node * ptr, int item) {

    ptr = (struct node * ) malloc(sizeof(struct node));
    if (ptr == NULL) {
        printf("\nOVERFLOW\n");
        return;
    } else {
        ptr -> data = item;
        if (front == NULL) {
            front = ptr;
            rear = ptr;
            front -> next = NULL;
            rear -> next = NULL;
        } else {
            rear -> next = ptr;
            rear = ptr;
            rear -> next = NULL;
        }
    }
}

void deleteNode(struct node * ptr) {
    if (front == NULL) {
        printf("Underflow");
        return;
    } else {
        ptr = front;
        front = front -> next;
        free(ptr);
    }
}

int main() {
    struct node * head = NULL;
    int choice,e;
   do
    {
    printf("1.INSERT \n2.DELETE \n3.EXIT\n\n");
    
    scanf("%d",&choice);
    
    switch(choice)
    {
        case 1:
        printf("Enter the element \n");
        scanf("%d",&e);
        insert(head,e);
        break;
        case 2:
        deleteNode(head);
        break;
        case 3:
        break;
        default:
        printf("INVALID CHOICE \n");
        break;
        
    }}while(choice!=3);
    
    
  while(front!=NULL)
  {
    printf("Elements: %d\n", front -> data);
    front=front->next;
  }
   
    return 0;
}
