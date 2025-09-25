#include <stdio.h>

int main() {
    int choice, size, i;
    int arr[100]; // Assuming max 100 elements
    int sum = 0, max, min;
    
    while (1) {
        printf("\nMenu:\n");
        printf("1. Calculate Sum of Array\n");
        printf("2. Find Maximum in Array\n");
        printf("3. Find Minimum in Array\n");
        printf("4. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);
        
        if (choice == 4) {
            return 0;
        }
        
        if (choice >= 1 && choice <= 3) {
            printf("Enter the size of the array: ");
            scanf("%d", &size);
            
            printf("Enter %d elements:\n", size);
            for (i = 0; i < size; i++) {
                scanf("%d", &arr[i]);
            }
        }
        
        switch (choice) {
            case 1:
                sum = 0;
                for (i = 0; i < size; i++) {
                    sum += arr[i];
                }
                printf("Sum of array elements: %d\n", sum);
                break;
                
            case 2:
                max = arr[0];
                for (i = 1; i < size; i++) {
                    if (arr[i] > max) {
                        max = arr[i];
                    }
                }
                printf("Maximum in array: %d\n", max);
                break;
                
            case 3:
                min = arr[0];
                for (i = 1; i < size; i++) {
                    if (arr[i] < min) {
                        min = arr[i];
                    }
                }
                printf("Minimum in array: %d\n", min);
                break;
                
            default:
                printf("Invalid choice!\n");
        }
    }
    
    return 0;
}
