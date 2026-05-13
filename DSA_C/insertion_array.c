#include<stdio.h>
#include<stdlib.h>
int main(){
    int n , position , data , arr[50];
    printf("Enter number of elements: ");
    scanf("%d", &n);
    for(int i = 0 ; i < n ; i++){
        printf("Enter element %d: ", i+1);
        scanf("%d", &arr[i]);
    }

    printf("Enter position to insert new element (0 to %d): ", n);
    scanf("%d", &position);
    printf("Enter new element to insert: ");
    scanf("%d", &data);

    if(position < 0 || position > n){
        printf("Invalid position!\n");
        return 1;
    }
    for(int i = n-1 ; i >= position-1 ; i--){
        arr[i+1] = arr[i];
    }
    arr[position-1] = data;
    n++; // increase the size of array

    for(int i = 0 ; i < n ; i++){
        printf("%d ", arr[i]);
    }
}