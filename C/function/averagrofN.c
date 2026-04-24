#include <stdio.h>

float avg(int num){
    int sum = 0, n;

    for(int i = 1 ; i <= num ; i++){
        printf("Enter number %d: ", i);
        scanf("%d", &n);
        sum = sum + n;
    }

    float average = (float)sum / num;
    return average;
}

int main(){
    int num;
    printf("Enter Number of Integers for average: ");
    scanf("%d", &num);

    float result = avg(num);
    printf("Average: %f", result);

    return 0;
}