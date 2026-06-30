#include <stdio.h>

struct Student {
    int roll;
    char name[50];
    int sub[3];
    int total;
};

int main() {
    struct Student s;
    printf("Enter roll, name: ");
    scanf("%d %s", &s.roll, s.name);
    printf("Enter marks in 3 subjects: ");
    scanf("%d %d %d", &s.sub[0], &s.sub[1], &s.sub[2]);
    s.total = s.sub[0] + s.sub[1] + s.sub[2];
    printf("Roll: %d, Name: %s, Total: %d, Percentage: %.2f%%\n",
           s.roll, s.name, s.total, s.total / 3.0);
    return 0;
}