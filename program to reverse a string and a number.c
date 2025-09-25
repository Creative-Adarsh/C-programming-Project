#include <stdio.h>

int main() {
    int choice;
    long long num, reversed = 0, original;
    char str[100], temp;
    int i, j;
    
    while (1) {
        printf("\nMenu:\n");
        printf("1. Reverse a Number\n");
        printf("2. Reverse a String\n");
        printf("3. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);
        
        switch (choice) {
            case 1:
                printf("Enter a number: ");
                scanf("%lld", &num);
                original = num;
                reversed = 0;
                
                // Handle negative numbers
                int negative = 0;
                if (num < 0) {
                    negative = 1;
                    num = -num;
                }
                
                while (num != 0) {
                    reversed = reversed * 10 + (num % 10);
                    num /= 10;
                }
                
                if (negative) {
                    reversed = -reversed;
                }
                
                printf("Reversed number of %lld is %lld\n", original, reversed);
                break;
                
            case 2:
                // Clear input buffer
                while (getchar() != '\n');
                printf("Enter a string: ");
                fgets(str, sizeof(str), stdin);
                
                // Find length manually without string.h
                for (i = 0; str[i] != '\0'; i++);
                if (i > 0 && str[i-1] == '\n') {
                    str[i-1] = '\0';
                    i--;
                }
                
                // Reverse the string
                for (j = 0; j < i / 2; j++) {
                    temp = str[j];
                    str[j] = str[i - j - 1];
                    str[i - j - 1] = temp;
                }
                
                printf("Reversed string: %s\n", str);
                break;
                
            case 3:
                return 0;
                
            default:
                printf("Invalid choice!\n");
        }
    }
    
    return 0;
}
