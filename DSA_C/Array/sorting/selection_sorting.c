#include<stdio.h>

void traverse_array(int array[] , int n ){
    printf("Array Elements are: \n");
    for(int i = 0 ; i < n ; i++){
        printf("%d  ", array[i]);
    }
    printf("\n");
}

void selection_sort(int array[] , int n){
    int min_index , temp= 0 ;
    for(int i = 0 ; i < n -1 ; i++){
        min_index = i;
        for(int j = i + 1 ; j < n ; j++){
            if(array[j] < array[min_index]){
                min_index = j;
            }
        }
        // swap
        temp = array[i];
        array[i] = array[min_index];
        array[min_index] = temp;
    }
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
    selection_sort(arr , n);
    traverse_array(arr , n);
}