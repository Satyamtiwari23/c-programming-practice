#include<stdio.h>

void fill_array(float array[] , int n){
    for(int i = 0 ; i < n ; i++){
        printf("Enter %dth element of array: ", (i+1));
        scanf("%f", &array[i]);
    }
}
void traverse_array(float array[] , int n){
    printf("Array Elements are: \n");
    for(int i = 0 ; i < n ; i++){
        printf("%.4f\n", array[i]);
    }
}
void linear_search(float array[] ,int n){
    float key;
    printf("Enter element to search: ");
    scanf("%f", &key);
    for(int i = 0 ; i < n ; i++){
        if(array[i] == key){
            printf("Element %.4f found at index %d\n", key, i);
        }
    }
}
int main(){
    int n ;

    printf("Enter number of elements in array: ");
    scanf("%d", &n);

    float array[n];
    fill_array(array ,n);
    traverse_array(array , n);
    
    linear_search(array , n );
}