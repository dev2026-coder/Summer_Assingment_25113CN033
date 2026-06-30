#include <stdio.h>

int main() {
    float balance = 5000.0;
    int choice;
    float amount;
    do {
        printf("\nATM Menu:\n1. Check Balance\n2. Deposit\n3. Withdraw\n4. Exit\nChoice: ");
        scanf("%d", &choice);
        switch (choice) {
            case 1: printf("Balance: %.2f\n", balance); break;
            case 2: printf("Amount to deposit: "); scanf("%f", &amount);
                    if (amount > 0) { balance += amount; printf("Deposited.\n"); }
                    break;
            case 3: printf("Amount to withdraw: "); scanf("%f", &amount);
                    if (amount > 0 && amount <= balance) { balance -= amount; printf("Withdrawn.\n"); }
                    else printf("Invalid or insufficient balance.\n");
                    break;
            case 4: printf("Thank you.\n"); break;
            default: printf("Invalid choice.\n");
        }
    } while (choice != 4);
    return 0;
}