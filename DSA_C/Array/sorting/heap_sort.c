#include<stdio.h>

void traverse_array(int array[] , int n ){
    printf("Array Elements are: \n");
    for(int i = 0 ; i < n ; i++){
        printf("%d  ", array[i]);
    }
    printf("\n");
}

void heap_sort(int array[] , int n){
    
}
int main(){
    int n ;
    printf("Enter number of elements: ");
    scanf("%d", &n);

    int arr[n];
    for(int i = 0 ; i < n ; i++){
        printf("Enter %d element of array: ", (i+1));
        scanf("%d", &arr[i]);
    }

    // selection Sorting Algorithm
    heap_sort(arr , n);
    traverse_array(arr , n);
}