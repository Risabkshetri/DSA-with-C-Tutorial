// 1. write a program to creare 1D array

#include<stdio.h>
int main(){
    // int  arr[4] = {1,2,3,4};
    int arr[2];
    printf("enter 2 numbers\n");
    for(int i = 0;i<2;i++){
        scanf("%d",&arr[i]);
    }
    for(int i = 0;i<2;i++){
        printf("%d ",arr[i]);
    }
}

//2. write a program to create 2D array
// #include<stdio.h>1 
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