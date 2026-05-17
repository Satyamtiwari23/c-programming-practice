#include<stdio.h>
#include<stdlib.h>
int main(){
    int n , data , arr[50];
    printf("Enter number of elements: ");
    scanf("%d", &n);
    for(int i = 0 ; i < n ; i++){
        printf("Enter element %d: ", i+1);
        scanf("%d", &arr[i]);
    }
    for(int i = 0 ; i < n ; i++){
        printf("%d ", arr[i]);
    }
    printf("Enter Data to be deleted: ");
    scanf("%d", &data);

    for(int i = 0 ; i < n ; i++){
        if(arr[i] == data){
            for(int j = i ; j < n-1 ; j++){
                arr[j] = arr[j+1];
            }
            free(arr[n-1]);
        }
    }
    printf("\nArray after deletion:\n");
    for(int i = 0 ; i < n ; i++){
        printf("%d ", arr[i]);
    }

    return 0;
}