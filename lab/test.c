#include<stdio.h>

int factorial(int num){
    if(num == 0 | num == 1){
        return 1;
    };
    return num * factorial(num - 1);
};

int main(){
    int number;
    printf("Enter any number: ");
    scanf("%d", &number);

    printf("Factorial of %d = %d", number, factorial(number));
    return 0;

}