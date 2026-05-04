#include <stdio.h>
int main(){
    int r1 , c1 , r2 , c2;
    printf("Enter rows of first matrix: ");
    scanf("%d", &r1);
    printf("Enter columns of first matrix: ");
    scanf("%d", &c1);
    printf("Enter rows of second matrix: ");
    scanf("%d", &r2);
    printf("Enter columns of second matrix: ");
    scanf("%d", &c2);
    int m1[r1][c1], m2[r2][c2], result[r1][c2];
    if(c1 != r2){
        printf("Matrix multiplication not possible");
        return 0;
    }
    for(int i = 0; i < r1; i++){
        for(int j = 0; j < c1; j++){
            printf("Enter element [%d][%d] of first matrix: ", i, j);
            scanf("%d", &m1[i][j]);
        }
    }
    for(int i = 0; i < r2; i++){
        for(int j = 0; j < c2; j++){
            printf("Enter element [%d][%d] of second matrix: ", i, j);
            scanf("%d", &m2[i][j]);
        }
    }

    for(int i = 0; i < r1; i++){
        for(int j = 0; j < c2; j++){
            result[i][j] = 0;
            for(int k = 0; k < c1; k++){
                result[i][j] = result[i][j] + m1[i][k] * m2[k][j];
            }
        }
    }
    printf("Resultant matrix:\n");
    for(int i = 0; i < r1; i++){
        for(int j = 0; j < c2; j++){
            printf("%d ", result[i][j]);
        }
        printf("\n");
    }
}