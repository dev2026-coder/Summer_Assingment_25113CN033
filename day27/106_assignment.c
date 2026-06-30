#include <stdio.h>
#include <string.h>

struct Employee {
    int id;
    char name[50];
    float salary;
};

int main() {
    struct Employee emp[100];
    int n, choice;
    printf("Number of employees: ");
    scanf("%d", &n);
    for (int i = 0; i < n; i++) {
        printf("ID, Name, Salary: ");
        scanf("%d %s %f", &emp[i].id, emp[i].name, &emp[i].salary);
    }
    do {
        printf("\n1. List All\n2. Find Highest Salary\n3. Exit\nChoice: ");
        scanf("%d", &choice);
        if (choice == 1) {
            for (int i = 0; i < n; i++)
                printf("%d %s %.2f\n", emp[i].id, emp[i].name, emp[i].salary);
        } else if (choice == 2) {
            int maxIdx = 0;
            for (int i = 1; i < n; i++)
                if (emp[i].salary > emp[maxIdx].salary) maxIdx = i;
            printf("Highest: %s with %.2f\n", emp[maxIdx].name, emp[maxIdx].salary);
        }
    } while (choice != 3);
    return 0;
}