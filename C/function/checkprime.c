#include <stdio.h>

int checkNumber(int n){
    int count = 0;

    for(int i = 1 ; i <= n ; i++){
        if(n % i == 0){
            count++;
        }
    }

    if(count > 2){
        return 0;
    } else {
        return 1;
    }
}

int main(){
    int n;
    printf("Enter Number: ");
    scanf("%d", &n);

    int result = checkNumber(n);

    if(result == 1){
        printf("%d is a Prime Number", n);
    } else {
        printf("%d is not a Prime Number", n);
    }

    return 0;
}