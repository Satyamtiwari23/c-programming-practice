#include <stdio.h>

// Function to create matrix
void createMatrix(int matrix[][100], int rows, int cols) {
    printf("Enter elements:\n");
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }
}

// Function to traverse matrix
void traverseMatrix(int matrix[][100], int rows, int cols) {
    printf("Matrix elements are:\n");
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }
}

int main() {
    int rows, cols;

    printf("Enter rows: ");
    scanf("%d", &rows);

    printf("Enter columns: ");
    scanf("%d", &cols);

    int matrix[100][100];  // fixed size like Java dynamic behavior

    createMatrix(matrix, rows, cols);
    traverseMatrix(matrix, rows, cols);

    return 0;
}