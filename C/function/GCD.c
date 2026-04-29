#include <stdio.h>

int checkNumber(int n, int x){
    int num = 1;

    for(int i = 1 ; i <= n && i <= x ; i++){
        if(n % i == 0 && x % i == 0){
            num = i;
        }
    }

    return num;
}

int main(){
    int n, x;

    printf("Enter N: ");
    scanf("%d", &n);

    printf("Enter X: ");
    scanf("%d", &x);

    int result = checkNumber(n, x);
    printf("Result: %d", result);

    return 0;
}