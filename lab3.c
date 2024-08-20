//5. WAP to perform transpse of 2d matrix

// #include<stdio.h>
// int main(){
//     int arr[3][3], transpose[3][3], i, j;
//     printf("Eneter Element of array: \n");
//     for(i=0; i<3; i++){
//         for(j=0; j<3; j++){
//             scanf("%d", &arr[i][j]);
//         }
//     }
//     for(i=0; i<3; i++){
//         for(j=0; j<3; j++){
//             transpose[i][j] = arr[j][i];
//         }
//     }

//     printf("Orginal matrix : \n");
//     for(i=0; i<3; i++){
//         for(j=0; j<3; j++){
//              printf("%d ", arr[i][j]);
//         }
//         printf("\n");
//     }
//     printf("Transpose on matrix : \n");
//     for(i=0; i<3; i++){
//         for(j=0; j<3; j++){
//              printf("%d ", transpose[i][j]);
//         }
//         printf("\n");
//     }
// }


// 6. WAP to perform linear search on multidimentional array

#include<stdio.h>

int main(){
    int i, j, row, col, element;

    printf("Enter no of rows in array : ");
    scanf("%d", &row);
    printf("Enter no of cols in array : ");
    scanf("%d", &col);

    int arr[row][col];

    printf("Enter elelment of aaray : \n");
    for(i=1; i<=row; i++){
        for(j=1; j<=col; j++){
            scanf("%d", &arr[i][j]);
        }
    }
    printf("Enter element you want to search : \n");
    scanf("%d", &element);
    for(i=1; i<=row; i++){
        for(j=1; j<=col; j++){
            if(arr[i][j] == element){
                printf("Element is found in (%d,%d) index.", i,j);
            }
        }
    }

return 0;
}