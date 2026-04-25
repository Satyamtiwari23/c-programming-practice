#include <stdio.h>

void checkNumber(int arr[], int index){
    int pnum = 0, nnum = 0, znum = 0;

    for(int i = 0 ; i < index ; i++){
        if(arr[i] > 0){
            pnum++;
        } else if(arr[i] < 0){
            nnum++;
        } else {
            znum++;
        }
    }

    printf("Positive numbers: %d\n", pnum);
    printf(" Negative numbers: %d\n", nnum);
    printf(" Zeroes: %d\n", znum);
}

int main(){
    int arr[100], index = 0, choice;

    do{
        printf("Enter a number: ");
        scanf("%d", &arr[index]);
        index++;

        printf("To add another press one otherwise press 0: ");
        scanf("%d", &choice);

    }while(choice != 0);

    checkNumber(arr, index);

    return 0;
}