#include <stdio.h>

#define ROWS 3
#define COLS 3

int main() {
    int matrix[ROWS][COLS] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
    int transpose[ROWS][COLS];
    int sum[ROWS][COLS];

    // Compute transpose
    for (int i = 0; i < ROWS; i++) {
        for (int j = 0; j < COLS; j++) {
            transpose[j][i] = matrix[i][j];
        }
    }

    // Compute sum
    for (int i = 0; i < ROWS; i++) {
        for (int j = 0; j < COLS; j++) {
            sum[i][j] = matrix[i][j] + transpose[i][j];
        }
    }

    // Print original matrix
    printf("Original matrix:\n");
    for (int i = 0; i < ROWS; i++) {
        for (int j = 0; j < COLS; j++) {
            printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }

    // Print transpose
    printf("Transpose:\n");
    for (int i = 0; i < ROWS; i++) {
        for (int j = 0; j < COLS; j++) {
            printf("%d ", transpose[i][j]);
        }
        printf("\n");
    }

    // Print sum
    printf("Sum:\n");
    for (int i = 0; i < ROWS; i++) {
        for (int j = 0; j < COLS; j++) {
            printf("%d ", sum[i][j]);
        }
        printf("\n");
    }

    return 0;
}
