//#include<stdio.h>

// int main(){
//     int arr[5], pos, i;

//     printf("Enter element of array: \n");
//     for(i = 0; i<5; i++){
//         scanf("%d", &arr[i]);
//     }

//     printf("Enter position to delete: \n");     
//     scanf("%d", &pos);
//     for(i = pos; i<5; i++){
//         arr[i] = arr[i+1];
//     }
//     for(i = 0; i<4; i++){
//         printf("%d ", arr[i]);
//     }
// }


#include <stdio.h>
#include<stdlib.h>

struct Node{
    int data; 
    struct Node* next;
};

void insertionAtBeginning(struct Node** head, int data);

int createNode(struct Node** head, int data){
    struct Node* newNode = malloc(sizeof(struct Node));
    newNode->data = data;
    newNode->next = *head;
    *head = newNode;
    return 1;
}

void insertionAtBeginning(struct Node** head, int data){
    struct Node* newNode = malloc(sizeof(struct Node));
    newNode->data = data;
    newNode->next = *head;
    *head = newNode;
}
int main() {
    struct Node* head = NULL;
    createNode(&head, 57);
    createNode(&head, 60);
    printf("%d", head->data);
    return 0;
}
