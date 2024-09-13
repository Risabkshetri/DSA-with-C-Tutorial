// #include<stdio.h>
// #include<stdlib.h>

// struct Node{
//     int data;
//     struct Node* next;
// };

// void insertionAtBeginning(int data, struct Node** head);


// void main(){
//    struct Node* head = malloc(sizeof(struct Node));
//    head->data = 57;
//    head->next = NULL;
//    printf("%d\n", head->data);

//    insertionAtBeginning(60, &head);

// }

// void insertionAtBeginning(int data, struct Node** head){
//      struct Node* newNode = (struct Node*) malloc(sizeof(struct Node));
//     newNode->data = data;
//     newNode->next = *head;

//     printf("%d", newNode->data);
// }
#include<stdio.h>
#include<stdlib.h>

struct Node{
    int data;
    struct Node* next;
};

void insertionAtEnd(int data, struct Node** head);


void main(){
   struct Node* head = malloc(sizeof(struct Node));
   head->data = 57;
   head->next = NULL;

   insertionAtEnd(60, &head);

}

void insertionAtEnd(int data, struct Node** head){
    struct Node* newNode = (struct Node*) malloc(sizeof(struct Node));
    struct Node* temp = *head;
    newNode->data = data;
    newNode->next = *head;

    if(head == NULL){
      *head = newNode;
   }else{
    while(temp->next != NULL){
        temp = temp->next;
    }
    temp->next = newNode;
   }
}