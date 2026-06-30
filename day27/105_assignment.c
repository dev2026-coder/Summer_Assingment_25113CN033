#include <stdio.h>
#include <string.h>

struct Student {
    int roll;
    char name[50];
    float marks;
};

int main() {
    struct Student s[100];
    int n, choice;
    printf("Enter number of students: ");
    scanf("%d", &n);
    for (int i = 0; i < n; i++) {
        printf("Roll, Name, Marks: ");
        scanf("%d %s %f", &s[i].roll, s[i].name, &s[i].marks);
    }
    do {
        printf("\n1. Display All\n2. Search by Roll\n3. Exit\nChoice: ");
        scanf("%d", &choice);
        if (choice == 1) {
            for (int i = 0; i < n; i++)
                printf("%d %s %.2f\n", s[i].roll, s[i].name, s[i].marks);
        } else if (choice == 2) {
            int r; printf("Enter roll: "); scanf("%d", &r);
            for (int i = 0; i < n; i++)
                if (s[i].roll == r)
                    printf("%d %s %.2f\n", s[i].roll, s[i].name, s[i].marks);
        }
    } while (choice != 3);
    return 0;
}