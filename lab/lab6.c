// calculate the factorial using recursion

#include<stdio.h>

int factorial(int num){
    if(num == 0 || num == 1) return 1;
    return num * factorial(num-1);
};

int main(){
    int num;
    printf("Enter any number: ");
    scanf("%d", &num);
    printf("Factorial of %d = %d", num, factorial(num));
    return 0;
}