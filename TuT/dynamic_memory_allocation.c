#include<stdio.h>
#include<stdlib.h>

int main(){
    int i, n;
    int *ptr;

    printf("Enter number of element : ");
    scanf("%d", &n);

    ptr = (int *) calloc(n, sizeof(int));

    if(ptr == NULL){
        printf("Memory is not allowed due to your storage issue! \n");
    }
    printf("Memory is allowed for your aray.\n");

    for(i = 0; i<n; i++){
        printf("Enter element %d: ", i+1);
        scanf("%d", &ptr[i]);
    }
    printf("Enter element of array: \n");
    for(i = 0; i<n; i++){
        printf("%d ", ptr[i]);
        
    }

    printf("\n");
    free(ptr);
    printf("Memory has fredd.");
    return 0;
}