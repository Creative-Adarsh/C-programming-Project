#include <stdio.h>

int main() {
    int choice;
    float balance = 0.0; // Initial balance
    float amount;
    
    do {
        printf("\nATM Menu:\n");
        printf("1. Deposit\n");
        printf("2. Withdraw\n");
        printf("3. Check Balance\n");
        printf("4. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);
        
        switch (choice) {
            case 1:
                printf("Enter amount to deposit: ");
                scanf("%f", &amount);
                if (amount > 0) {
                    balance += amount;
                    printf("Deposited %.2f. New balance: %.2f\n", amount, balance);
                } else {
                    printf("Invalid amount!\n");
                }
                break;
                
            case 2:
                printf("Enter amount to withdraw: ");
                scanf("%f", &amount);
                if (amount > 0 && amount <= balance) {
                    balance -= amount;
                    printf("Withdrew %.2f. New balance: %.2f\n", amount, balance);
                } else if (amount > balance) {
                    printf("Insufficient funds!\n");
                } else {
                    printf("Invalid amount!\n");
                }
                break;
                
            case 3:
                printf("Current balance: %.2f\n", balance);
                break;
                
            case 4:
                printf("Thank you for using the ATM!\n");
                break;
                
            default:
                printf("Invalid choice!\n");
        }
    } while (choice != 4);
    
    return 0;
}
