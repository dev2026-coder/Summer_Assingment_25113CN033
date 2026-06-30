#include <stdio.h>
#include <string.h>

#define MAX 100
#define NAME_LEN 50
#define DEPT_LEN 30

struct Employee {
    int id;
    char name[NAME_LEN];
    char dept[DEPT_LEN];
    float salary;
};

int count = 0;
struct Employee employees[MAX];

void addEmployee();
void displayAll();
void searchById();
void updateSalary();
void deleteEmployee();

int main() {
    int choice;
    do {
        printf("\n=== EMPLOYEE MANAGEMENT ===\n");
        printf("1. Add Employee\n");
        printf("2. Display All\n");
        printf("3. Search by ID\n");
        printf("4. Update Salary\n");
        printf("5. Delete Employee\n");
        printf("6. Exit\n");
        printf("Choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1: addEmployee(); break;
            case 2: displayAll(); break;
            case 3: searchById(); break;
            case 4: updateSalary(); break;
            case 5: deleteEmployee(); break;
            case 6: printf("Exiting...\n"); break;
            default: printf("Invalid.\n");
        }
    } while (choice != 6);
    return 0;
}

void addEmployee() {
    if (count >= MAX) {
        printf("Database full.\n");
        return;
    }
    struct Employee *e = &employees[count];
    printf("Enter ID: ");
    scanf("%d", &e->id);
    printf("Enter name: ");
    scanf("%s", e->name);
    printf("Enter department: ");
    scanf("%s", e->dept);
    printf("Enter salary: ");
    scanf("%f", &e->salary);
    count++;
    printf("Employee added.\n");
}

void displayAll() {
    if (count == 0) {
        printf("No employees.\n");
        return;
    }
    printf("\n%-5s %-20s %-15s %-10s\n", "ID", "Name", "Department", "Salary");
    for (int i = 0; i < count; i++) {
        struct Employee *e = &employees[i];
        printf("%-5d %-20s %-15s %-10.2f\n", e->id, e->name, e->dept, e->salary);
    }
}

void searchById() {
    int id;
    printf("Enter ID: ");
    scanf("%d", &id);
    for (int i = 0; i < count; i++) {
        if (employees[i].id == id) {
            struct Employee *e = &employees[i];
            printf("ID: %d, Name: %s, Dept: %s, Salary: %.2f\n",
                   e->id, e->name, e->dept, e->salary);
            return;
        }
    }
    printf("Employee not found.\n");
}

void updateSalary() {
    int id;
    printf("Enter ID: ");
    scanf("%d", &id);
    for (int i = 0; i < count; i++) {
        if (employees[i].id == id) {
            printf("Enter new salary: ");
            scanf("%f", &employees[i].salary);
            printf("Salary updated.\n");
            return;
        }
    }
    printf("Employee not found.\n");
}

void deleteEmployee() {
    int id;
    printf("Enter ID: ");
    scanf("%d", &id);
    for (int i = 0; i < count; i++) {
        if (employees[i].id == id) {
            for (int j = i; j < count - 1; j++)
                employees[j] = employees[j + 1];
            count--;
            printf("Employee deleted.\n");
            return;
        }
    }
    printf("Employee not found.\n");
}