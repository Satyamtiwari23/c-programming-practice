#include <stdio.h>

int findMax(int arr[], int n){
    int max = arr[0];
    for(int i = 1; i < n; i++){
        if(arr[i] > max){
            max = arr[i];
        }
    }
    return max;
}

int findMin(int arr[], int n){
    int min = arr[0];
    for(int i = 1; i < n; i++){
        if(arr[i] < min){
            min = arr[i];
        }
    }
    return min;
}

int findSum(int arr[], int n){
    int sum = 0;
    for(int i = 0; i < n; i++){
        sum += arr[i];
    }
    return sum;
}

float findAverage(int arr[], int n){
    int sum = findSum(arr, n);
    return (float)sum / n;
}

int main(){
    int n;

    printf("Enter size of array: ");
    scanf("%d", &n);

    int arr[n];

    for(int i = 0; i < n; i++){
        printf("Enter element %d: ", i+1);
        scanf("%d", &arr[i]);
    }

    printf("Maximum: %d\n", findMax(arr, n));
    printf("Minimum: %d\n", findMin(arr, n));
    printf("Sum: %d\n", findSum(arr, n));
    printf("Average: %.2f\n", findAverage(arr, n));

    return 0;
}