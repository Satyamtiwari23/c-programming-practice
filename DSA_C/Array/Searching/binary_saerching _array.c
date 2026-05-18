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
void sort_array(float array[] , int n){
    // Simple Bubble Sort
    for(int i = 0 ; i < n-1 ; i++){
        for(int j = 0 ; j < n-i-1 ; j++){
            if(array[j] > array[j+1]){
                // swap
                float temp = array[j];
                array[j] = array[j+1];
                array[j+1] = temp;
            }
        }
    }
}
void itrative_binary_search(float array[] , int n){
    float key ;
    int low = 0 , high = n-1 , mid = 0;  
    printf("Enter element to search: ");
    scanf("%f", &key);

    while(low <= high){
        mid = (low + high) / 2 ;

        if(array[mid] == key){
            printf("Element %.4f found at index %d\n", key , mid);
            return ;
        }else if(array[mid] < key){
            low = mid +1 ;
        }
        else{
            high = mid - 1;
        }
    }
}
void recursive_binary_search(float array[] ,int n){
    float key ;
    printf("Enter element to search: ");
    scanf("%f", &key);
    int low = 0 , high = n-1 ;
    if(low > high){
        printf("Element not found\n");
        return ;
    }
    else if(array[(low + high)/2] == key){
        
    }
}

int main(){
    int n ;
    printf("Enter number of elements in array: ");
    scanf("%d", &n);

    float array[n];

    fill_array(array , n);
    traverse_array(array , n);
    // Sort the array first
    sort_array(array , n);
    traverse_array(array , n);

    itrative_binary_search(array , n);
}