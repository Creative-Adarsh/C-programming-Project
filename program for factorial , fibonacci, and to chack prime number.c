#include <stdio.h>

long long factorial(int n) {
    if (n == 0 || n == 1) return 1;
    long long fact = 1;
    for (int i = 2; i <= n; i++) {
        fact *= i;
    }
    return fact;
}

void fibonacci(int terms) {
    int a = 0, b = 1, c;
    printf("Fibonacci series: ");
    for (int i = 0; i < terms; i++) {
        printf("%d ", a);
        c = a + b;
        a = b;
        b = c;
    }
    printf("\n");
}

int isPrime(int num) {
    if (num <= 1) return 0;
    for (int i = 2; i * i <= num; i++) {
        if (num % i == 0) return 0;
    }
    return 1;
}

int main() {
    int choice, num, terms;
    
    while (1) {
        printf("\nMenu:\n");
        printf("1. Calculate Factorial\n");
        printf("2. Generate Fibonacci Series\n");
        printf("3. Check if Prime\n");
        printf("4. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);
        
        if (choice == 4) {
            break;
        }
        
        switch (choice) {
            case 1:
                printf("Enter a number: ");
                scanf("%d", &num);
                if (num < 0) {
                    printf("Factorial not defined for negative numbers!\n");
                } else {
                    printf("Factorial of %d is %lld\n", num, factorial(num));
                }
                break;
            case 2:
                printf("Enter number of terms: ");
                scanf("%d", &terms);
                if (terms <= 0) {
                    printf("Number of terms must be positive!\n");
                } else {
                    fibonacci(terms);
                }
                break;
            case 3:
                printf("Enter a number: ");
                scanf("%d", &num);
                if (isPrime(num)) {
                    printf("%d is a prime number.\n", num);
                } else {
                    printf("%d is not a prime number.\n", num);
                }
                break;
            default:
                printf("Invalid choice!\n");
        }
    }
    
    return 0;
}
