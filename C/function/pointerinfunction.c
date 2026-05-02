#include <stdio.h>

// Swap using pointers
void swap(int *a, int *b){
    int temp = *a;
    *a = *b;
    *b = temp;
}

// Sum using pointers
int findSum(int *arr, int n){
    int sum = 0;
    for(int i = 0; i < n; i++){
        sum += *(arr + i);
    }
    return sum;
}

// Display using pointers
void display(int *arr, int n){
    printf("Array elements: ");
    for(int i = 0; i < n; i++){
        printf("%d ", *(arr + i));
    }
    printf("\n");
}

int main(){
    int a, b;

    printf("Enter two numbers:\n");
    scanf("%d %d", &a, &b);

    printf("Before Swap: a = %d, b = %d\n", a, b);
    swap(&a, &b);
    printf("After Swap: a = %d, b = %d\n", a, b);

    int n;
    printf("Enter size of array: ");
    scanf("%d", &n);

    int arr[n];

    for(int i = 0; i < n; i++){
        printf("Enter element %d: ", i+1);
        scanf("%d", &arr[i]);
    }

    display(arr, n);
    printf("Sum of array: %d\n", findSum(arr, n));

    return 0;
}