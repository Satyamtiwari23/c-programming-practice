#include <stdio.h>

void checkNumber(int n){
    int fnum = 0, snum = 1, nnum;

    printf("Fibonacci Series: ");
    printf("%d %d ", fnum, snum);

    for(int i = 1 ; i <= n ; i++){
        nnum = fnum + snum;
        fnum = snum;
        snum = nnum;
        printf("%d ", nnum);
    }
}

int main(){
    int n;
    printf("Enter Number: ");
    scanf("%d", &n);

    checkNumber(n);

    return 0;
}