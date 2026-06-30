#include <stdio.h>
#include <string.h>

struct Item {
    int id;
    char name[50];
    int qty;
    float price;
};

int main() {
    struct Item items[100];
    int n, choice;
    printf("Number of items: ");
    scanf("%d", &n);
    for (int i = 0; i < n; i++) {
        printf("ID, Name, Quantity, Price: ");
        scanf("%d %s %d %f", &items[i].id, items[i].name, &items[i].qty, &items[i].price);
    }
    do {
        printf("\n1. Display Inventory\n2. Update Quantity\n3. Search by ID\n4. Exit\nChoice: ");
        scanf("%d", &choice);
        if (choice == 1) {
            for (int i = 0; i < n; i++)
                printf("%d %s qty:%d price:%.2f\n", items[i].id, items[i].name, items[i].qty, items[i].price);
        } else if (choice == 2) {
            int id, newQty;
            printf("Item ID: "); scanf("%d", &id);
            printf("New quantity: "); scanf("%d", &newQty);
            for (int i = 0; i < n; i++)
                if (items[i].id == id) { items[i].qty = newQty; break; }
        } else if (choice == 3) {
            int id; printf("Item ID: "); scanf("%d", &id);
            for (int i = 0; i < n; i++)
                if (items[i].id == id)
                    printf("%d %s qty:%d price:%.2f\n", items[i].id, items[i].name, items[i].qty, items[i].price);
        }
    } while (choice != 4);
    return 0;
}