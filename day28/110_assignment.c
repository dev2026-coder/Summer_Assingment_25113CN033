#include <stdio.h>

struct Account {
    int accNo;
    char name[50];
    float balance;
};

int main() {
    struct Account acc;
    int choice;
    float amount;
    printf("Enter account number, name, initial balance: ");
    scanf("%d %s %f", &acc.accNo, acc.name, &acc.balance);
    do {
        printf("\n1. Deposit\n2. Withdraw\n3. Check Balance\n4. Exit\nChoice: ");
        scanf("%d", &choice);
        switch (choice) {
            case 1: printf("Amount: "); scanf("%f", &amount);
                    if (amount > 0) acc.balance += amount; break;
            case 2: printf("Amount: "); scanf("%f", &amount);
                    if (amount > 0 && amount <= acc.balance) acc.balance -= amount;
                    else printf("Insufficient.\n"); break;
            case 3: printf("Balance: %.2f\n", acc.balance); break;
        }
    } while (choice != 4);
    return 0;
}