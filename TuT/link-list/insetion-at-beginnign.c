#include<stdio.h>
#include<stdlib.h>

struct Node{
    int data;
    struct Node* next;
};

void insertionAtBeginning(int data, struct Node** head);


void main(){
   struct Node* head = malloc(sizeof(struct Node));
   head->data = 57;
   head->next = NULL;
   

}

void insertionAtBeginning(int data, struct Node** head){
     struct Node* newNode = (struct Node*) malloc(sizeof(struct Node));
    newNode->data = 57;
    newNode->next = *head;
}