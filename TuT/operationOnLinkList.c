// insertion at beginning
#include<stdio.h>
#include<stdlib.h>

// prototype
struct Node{
    struct Node* prev;
    int data; 
    struct Node* next;
};
void insertionAtBeginning(struct Node** head, int data);


int main(){
    struct Node* head = NULL;
    insertionAtBeginning(&head, 45);
    return 0;
}
void insertionAtBeginning(struct Node** head, int data){
    struct Node* newNode = malloc(sizeof(struct Node));
    newNode->data = data;
    newNode->next = *head;
    newNode->prev = NULL;
    if(*head != NULL){
        (*head)->prev = newNode;
    }
    *head = newNode;
}
// insertion at end
// insertion at specific position
// deletion at beginning
// deletion at end
// deletion at specific position
// traversing
// count nodes