#include <stdio.h>

int sum(int fnum, int snum){
    return fnum + snum;
}

int main(){
    int num1, num2;

    printf("Enter First Number: ");
    scanf("%d", &num1);

    printf("Enter Second Number: ");
    scanf("%d", &num2);

    int result = sum(num1, num2);
    printf("Sum: %d", result);

    return 0;
}