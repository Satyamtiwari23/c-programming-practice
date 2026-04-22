#include <stdio.h>
#include <math.h>

int checkArmstrong(int n){
    int original = n;
    int rem, result = 0, count = 0, temp = n;

    // Count digits
    while(temp != 0){
        count++;
        temp /= 10;
    }

    temp = n;

    // Armstrong logic
    while(temp != 0){
        rem = temp % 10;
        result += pow(rem, count);
        temp /= 10;
    }

    if(result == original){
        return 1;
    } else {
        return 0;
    }
}

int main(){
    int n;

    printf("Enter Number: ");
    scanf("%d", &n);

    int result = checkArmstrong(n);

    if(result == 1){
        printf("Armstrong Number");
    } else {
        printf("Not an Armstrong Number");
    }

    return 0;
}