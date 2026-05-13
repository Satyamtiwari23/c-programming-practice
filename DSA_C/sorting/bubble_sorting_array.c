#include<stdio.h>

void fill_array(float array[] , int n){
    for(int i = 0 ; i < n ; i++){
        printf("Enter %dth element of array: ", (i+1));
        scanf("%f", &array[i]);
    }
}
void traverse_array(float aaray[] , int n ){
    printf("Array Elements are: \n");
    for(int i = 0 ; i < n ; i++){
        printf("%.4f\n", aaray[i]);
    }
}
void bubble_sort(float array[] , int n){
    float temp ;
    for(int i = 0 ; i < n-1 ; i++){
        for(int j = 0 ; j < n-i-1 ; j++){
            if(array[j] > array[j+1]){
                //swap
                temp = array[j];
                array[j] = array[j+1];
                array[j+1] = temp;
            }
        }
    }
}
int main(){
    int n;
    printf("Enter number of elements in array: ");
    scanf("%d", &n);

    float array[n];
    fill_array(array , n);
    traverse_array(array , n);
    // Bubble Sort  
    bubble_sort(array , n);
    traverse_array(array , n);
}