#include <stdio.h>

void printSquare(int size) {
    int i, j;
    for (i = 0; i < size; i++) {
        for (j = 0; j < size; j++) {
            printf("* ");
        }
        printf("\n");
    }
}

void printTriangle(int size) {
    int i, j;
    for (i = 1; i <= size; i++) {
        for (j = 1; j <= i; j++) {
            printf("* ");
        }
        printf("\n");
    }
}

void printPyramid(int size) {
    int i, j, k;
    for (i = 1; i <= size; i++) {
        for (j = 1; j <= size - i; j++) {
            printf(" ");
        }
        for (k = 1; k <= 2 * i - 1; k++) {
            printf("*");
        }
        printf("\n");
    }
}

int main() {
    int choice, size;
    
    while (1) {
        printf("\nMenu:\n");
        printf("1. Print Square\n");
        printf("2. Print Triangle\n");
        printf("3. Print Pyramid\n");
        printf("4. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);
        
        if (choice == 4) {
            break;
        }
        
        printf("Enter size: ");
        scanf("%d", &size);
        
        switch (choice) {
            case 1:
                printSquare(size);
                break;
            case 2:
                printTriangle(size);
                break;
            case 3:
                printPyramid(size);
                break;
            default:
                printf("Invalid choice!\n");
        }
    }
    
    return 0;
}
