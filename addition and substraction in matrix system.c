#include <stdio.h>

int main() {
    int choice, rows, cols, i, j;
    int mat1[10][10], mat2[10][10], result[10][10]; // Assuming max 10x10 matrices
    
    while (1) {
        printf("\nMenu:\n");
        printf("1. Matrix Addition\n");
        printf("2. Matrix Subtraction\n");
        printf("3. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);
        
        if (choice == 3) {
            return 0;
        }
        
        switch (choice) {
            case 1:
            case 2:
                printf("Enter number of rows: ");
                scanf("%d", &rows);
                printf("Enter number of columns: ");
                scanf("%d", &cols);
                
                printf("Enter elements of first matrix:\n");
                for (i = 0; i < rows; i++) {
                    for (j = 0; j < cols; j++) {
                        scanf("%d", &mat1[i][j]);
                    }
                }
                
                printf("Enter elements of second matrix:\n");
                for (i = 0; i < rows; i++) {
                    for (j = 0; j < cols; j++) {
                        scanf("%d", &mat2[i][j]);
                    }
                }
                
                printf("Result matrix:\n");
                for (i = 0; i < rows; i++) {
                    for (j = 0; j < cols; j++) {
                        if (choice == 1) {
                            result[i][j] = mat1[i][j] + mat2[i][j];
                        } else {
                            result[i][j] = mat1[i][j] - mat2[i][j];
                        }
                        printf("%d ", result[i][j]);
                    }
                    printf("\n");
                }
                break;
                
            default:
                printf("Invalid choice!\n");
        }
    }
    
    return 0;
}
