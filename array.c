// 1. write a program to creare 1D array

// #include<stdio.h>
// int main(){
//     // int  arr[4] = {1,2,3,4};
//     int arr[2];
//     printf("enter 10 numbers\n");
//     for(int i = 0;i<10;i++){
//         scanf("%d",&arr[i]);
//     }
//     for(int i = 0;i<10;i++){
//         printf("%d ",arr[i]);
//     }
// }

//2. write a program to create 2D array
// #include<stdio.h>
// int main(){
//     int arr[3][3];
//     printf("enter elements of matrix: \n");
//     for(int i = 0;i<3;i++){
//         for(int j = 0;j<3;j++){
//             printf("enter element [%d][%d]: ",i,j);
//             scanf("%d",&arr[i][j]);
//         }
        
//     }
//     printf("matrix is: \n");
//     for(int i = 0;i<3;i++){
//         for(int j = 0;j<3;j++){
//             printf("%d ",arr[i][j]);
//         }
//         printf("\n");
//     }
// }


// 3.WAP in C to insert an element at any specific location in an array.

// #include<stdio.h>
// int main(){
//     int arr[5], ele, pos, i;
//     printf("Enter element of array: \n");
//     for(i = 0; i<5; i++){
//         scanf("%d", &arr[i]);
//     }

//     printf("Enter element to insert: \n");
//     scanf("%d", &ele);
//     printf("Enter position to insert: \n");
//     scanf("%d", &pos);
//     for(i = 4; i>=pos-1; i--){
//         arr[i+1] = arr[i];
//     }
//     arr[pos-1] = ele;
//     for(i = 0; i<6; i++){
//         printf("%d ", arr[i]);
//     } 

// }

// 4. WAP in C to delete an element at any specific location in an array.
#include<stdio.h>

int main(){
    int arr[5], pos, i;

    printf("Enter element of array: \n");
    for(i = 0; i<5; i++){
        scanf("%d", &arr[i]);
    }

    printf("Enter position to delete: \n");     
    scanf("%d", &pos);
    for(i = pos; i<5; i++){
        arr[i] = arr[i+1];
    }
    for(i = 0; i<4; i++){
        printf("%d ", arr[i]);
    }
    
}