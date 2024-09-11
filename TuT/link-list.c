#include<stdio.h>
#include<stdlib.h>

struct node{
    struct node* prev;
    int data;
    struct node* next;
};

int main(){
    struct node* head = malloc(sizeof(struct node));
    head -> prev = NULL;
    head -> data = 45;
    head -> next = NULL;

    struct node* mid = malloc(sizeof(struct node));
    mid -> prev = NULL;
    mid -> data = 50;
    mid -> next = NULL;

    struct node* last = malloc(sizeof(struct node));
    last -> prev = NULL;
    last -> data = 60;
    last -> next = NULL;

    
    head -> next = mid;
    mid -> prev = head;
    mid -> next = last;
    last -> prev = mid;


    printf("Data: %d, Address: %p \n", head -> data, head);
    printf("Data: %d, Address: %p \n", mid -> data, mid);
    printf("Data: %d, Address: %p \n", last -> data, last);
    
    return 0;
}
