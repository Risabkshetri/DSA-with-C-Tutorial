#include<stdio.h>1 
int main(){
    int arr[3][3];
    printf("enter elements of matrix: \n");
    for(int i = 0;i<3;i++){
        for(int j = 0;j<3;j++){
            printf("enter element [%d][%d]: ",i,j);
            scanf("%d",&arr[i][j]);
        }
        
    }
    printf("matrix is: \n");
    for(int i = 0;i<3;i++){
        for(int j = 0;j<3;j++){
            printf("%d ",arr[i][j]);
        }
        printf("\n");
    }
}