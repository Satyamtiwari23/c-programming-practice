#include <stdio.h>

// Function to create array
void createArray(int arr[], int size) {
    printf("Enter elements:\n");
    for (int i = 0; i < size; i++) {
        scanf("%d", &arr[i]);
    }
}

// Function to traverse array
void traverseArray(int arr[], int size) {
    printf("Array elements are:\n");
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
}

int main() {
    int size;

    printf("Enter size: ");
    scanf("%d", &size);

    int arr[size];

    createArray(arr, size);
    traverseArray(arr, size);

    return 0;
}