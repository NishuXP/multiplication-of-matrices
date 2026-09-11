#include <stdio.h>

int main() {
    int r1, c1, r2, c2, i, j, k;
    
    printf("Enter rows and columns for the first matrix: ");
    scanf("%d %d", &r1, &c1);
    
    printf("Enter rows and columns for the second matrix: ");
    scanf("%d %d", &r2, &c2);
    
    if (c1 != r2) {
        printf("Error! Columns of the first matrix must match rows of the second matrix.\n");
        return 0;
    }
    
    int first[10][10], second[10][10], result[10][10];
    
    printf("\nEnter elements of the first matrix:\n");
    for (i = 0; i < r1; i++) {
        for (j = 0; j < c1; j++) {
            printf("A[%d][%d]: ", i, j);
            scanf("%d", &first[i][j]);
        }
    }
    
    printf("\nEnter elements of the second matrix:\n");
    for (i = 0; i < r2; i++) {
        for (j = 0; j < c2; j++) {
            printf("B[%d][%d]: ", i, j);
            scanf("%d", &second[i][j]);
        }
    }
    
    for (i = 0; i < r1; i++) {
        for (j = 0; j < c2; j++) {
            result[i][j] = 0;
        }
    }
    
    for (i = 0; i < r1; i++) {
        for (j = 0; j < c2; j++) {
            for (k = 0; k < c1; k++) {
                result[i][j] += first[i][k] * second[k][j];
            }
        }
    }
    
    printf("\nResultant Matrix:\n");
    for (i = 0; i < r1; i++) {
        for (j = 0; j < c2; j++) {
            printf("%d \t", result[i][j]);
        }
        printf("\n");
    }
    
    return 0;
}