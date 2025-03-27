#include <stdio.h>

int main() {
    int i, j, k, rows, cols;
    
    printf("Enter rows and columns: ");
    scanf("%d %d", &rows, &cols);
    
    int mat1[rows][cols], mat2[cols][rows], product[rows][rows];

    printf("Enter first matrix elements:\n");
    for(i = 0; i < rows; i++)
        for(j = 0; j < cols; j++)
            scanf("%d", &mat1[i][j]);

    printf("Enter second matrix elements:\n");
    for(i = 0; i < cols; i++)
        for(j = 0; j < rows; j++)
            scanf("%d", &mat2[i][j]);

    for(i = 0; i < rows; i++)
        for(j = 0; j < rows; j++) {
            product[i][j] = 0;
            for(k = 0; k < cols; k++)
                product[i][j] += mat1[i][k] * mat2[k][j];
        }

    printf("Matrix Multiplication Result:\n");
    for(i = 0; i < rows; i++) {
        for(j = 0; j < rows; j++)
            printf("%d ", product[i][j]);
        printf("\n");
    }
    return 0;
}
