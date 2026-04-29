#include <stdio.h>

int checkPalindrome(int n){
    int original = n;
    int reverse = 0, rem;

    while(n != 0){
        rem = n % 10;
        reverse = reverse * 10 + rem;
        n = n / 10;
    }

    if(original == reverse){
        return 1;
    } else {
        return 0;
    }
}

int main(){
    int n;

    printf("Enter Number: ");
    scanf("%d", &n);

    int result = checkPalindrome(n);

    if(result == 1){
        printf("Palindrome Number");
    } else {
        printf("Not a Palindrome Number");
    }

    return 0;
}