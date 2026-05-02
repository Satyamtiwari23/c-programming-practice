#include <stdio.h>
#include <string.h>

// Find length manually
int findLength(char str[]){
    int len = 0;
    while(str[len] != '\0'){
        len++;
    }
    return len;
}

// Reverse string
void reverseString(char str[]){
    int len = findLength(str);
    for(int i = 0; i < len/2; i++){
        char temp = str[i];
        str[i] = str[len - i - 1];
        str[len - i - 1] = temp;
    }
}

// Palindrome check
int isPalindrome(char str[]){
    int len = findLength(str);

    for(int i = 0; i < len/2; i++){
        if(str[i] != str[len - i - 1]){
            return 0;
        }
    }
    return 1;
}

int main(){
    char str[100];

    printf("Enter a string: ");
    scanf("%s", str);

    printf("Length: %d\n", findLength(str));

    if(isPalindrome(str)){
        printf("Palindrome String\n");
    } else {
        printf("Not a Palindrome String\n");
    }

    reverseString(str);
    printf("Reversed String: %s\n", str);

    return 0;
}