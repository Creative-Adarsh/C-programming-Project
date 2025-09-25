#include <stdio.h>

void countVowels(char *str) {
    int count = 0;
    for (int i = 0; str[i] != '\0'; i++) {
        char ch = str[i];
        // Manual lowercase conversion
        if (ch >= 'A' && ch <= 'Z') {
            ch += 32;
        }
        if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u') {
            count++;
        }
    }
    printf("Number of vowels: %d\n", count);
}

void countConsonants(char *str) {
    int count = 0;
    for (int i = 0; str[i] != '\0'; i++) {
        char ch = str[i];
        // Manual lowercase conversion
        if (ch >= 'A' && ch <= 'Z') {
            ch += 32;
        }
        if ((ch >= 'a' && ch <= 'z') && !(ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u')) {
            count++;
        }
    }
    printf("Number of consonants: %d\n", count);
}

void countDigits(char *str) {
    int count = 0;
    for (int i = 0; str[i] != '\0'; i++) {
        char ch = str[i];
        if (ch >= '0' && ch <= '9') {
            count++;
        }
    }
    printf("Number of digits: %d\n", count);
}

int main() {
    int choice;
    char str[100]; // Assuming max string length of 99 characters
    
    while (1) {
        printf("\nMenu:\n");
        printf("1. Count Vowels in a String\n");
        printf("2. Count Consonants in a String\n");
        printf("3. Count Digits in a String\n");
        printf("4. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);
        
        if (choice == 4) {
            break;
        }
        
        // Clear input buffer before reading string
        while (getchar() != '\n'); // To handle leftover newline from scanf
        
        printf("Enter a string: ");
        fgets(str, sizeof(str), stdin);
        
        // Remove trailing newline if present
        int len = strlen(str);
        if (len > 0 && str[len-1] == '\n') {
            str[len-1] = '\0';
        }
        
        switch (choice) {
            case 1:
                countVowels(str);
                break;
            case 2:
                countConsonants(str);
                break;
            case 3:
                countDigits(str);
                break;
            default:
                printf("Invalid choice!\n");
        }
    }
    
    return 0;
}
