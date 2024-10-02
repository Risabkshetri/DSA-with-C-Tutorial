// calculate the factorial of number using recusion

#include<stdio.h>

int factorial(int n){
    if(n == 1){
     return 1;
    };
    return n * factorial(n-1);
};


int main(){
    int num = 3;
    printf("factorial of 3 = %d", factorial(num));
    return 0;
}
