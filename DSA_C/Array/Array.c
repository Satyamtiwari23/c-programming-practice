#include<stdio.h>

void arr (float array[] , int n){
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
int main(){
    int n;
    printf("Enter Number of Elements in Array: ");
    scanf("%d", &n);
    float array[n];
    arr(array , n);
    traverse_array(array , n);
}