#include<stdio.h>

void fill_array(int array[] , int n){
    for(int i = 0 ; i < n ; i++){
        printf("Enter %dth element of array: ", (i+1));
        scanf("%d", &array[i]);
    }
}
void traverse_array(int aaray[] , int n ){
    printf("Array Elements are: \n");
    for(int i = 0 ; i < n ; i++){
        printf("%.d\n", aaray[i]);
    }
}
void insertion_sort(int array[] , int n){
    int key;
    for(int i = 1 ; i < n ; i++){
        key = array[i];
        int j = i - 1;
        while(j >= 0 && array[j] > key){
            array[j + 1] = array[j];
            j--;
        }
        array[j+1] = key;
    }
}
int main(){
    int n;
    printf("Enter number of elements in array: ");
    scanf("%d", &n);

    int array[n];
    fill_array(array , n);
    traverse_array(array , n);
    // Insertion Sort  
    insertion_sort(array , n);
    traverse_array(array , n);
}