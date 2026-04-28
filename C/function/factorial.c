#include <stdio.h>

int fact(int fnum){
    int factorial = 1;

    for(int i = 2 ; i <= fnum ; i++){
        factorial = factorial * i;
    }

    return factorial;
}

int main(){
    int num1;
    printf("Enter a Number: ");
    scanf("%d", &num1);

    int result = fact(num1);
    printf("Factorial: %d", result);

    return 0;
}