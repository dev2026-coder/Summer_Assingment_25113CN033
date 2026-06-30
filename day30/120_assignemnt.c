#include <stdio.h>
#include <string.h>

#define MAX 100
#define NAME_LEN 50

struct Student {
    int roll;
    char name[NAME_LEN];
    float marks[3];
    float total;
    float avg;
};

int count = 0;
struct Student students[MAX];

// Function prototypes
void addStudent();
void displayAll();
void searchByRoll();
void updateMarks();
void deleteStudent();
void sortByTotal();
void showTopScorer();
void countPassed();
void menu();

int main() {
    int choice;
    do {
        printf("\n======= COMPLETE STUDENT MANAGEMENT =======\n");
        printf("1. Add Student\n");
        printf("2. Display All Students\n");
        printf("3. Search by Roll Number\n");
        printf("4. Update Marks\n");
        printf("5. Delete Student\n");
        printf("6. Sort by Total Marks (Descending)\n");
        printf("7. Show Top Scorer\n");
        printf("8. Count Passed Students\n");
        printf("9. Exit\n");
        printf("Choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1: addStudent(); break;
            case 2: displayAll(); break;
            case 3: searchByRoll(); break;
            case 4: updateMarks(); break;
            case 5: deleteStudent(); break;
            case 6: sortByTotal(); break;
            case 7: showTopScorer(); break;
            case 8: countPassed(); break;
            case 9: printf("Thank you!\n"); break;
            default: printf("Invalid choice.\n");
        }
    } while (choice != 9);
    return 0;
}

void addStudent() {
    if (count >= MAX) {
        printf("Database is full!\n");
        return;
    }
    struct Student *s = &students[count];
    printf("Enter roll number: ");
    scanf("%d", &s->roll);
    printf("Enter name: ");
    scanf("%s", s->name);
    printf("Enter marks in 3 subjects: ");
    s->total = 0;
    for (int i = 0; i < 3; i++) {
        scanf("%f", &s->marks[i]);
        s->total += s->marks[i];
    }
    s->avg = s->total / 3;
    count++;
    printf("Student added successfully.\n");
}

void displayAll() {
    if (count == 0) {
        printf("No records.\n");
        return;
    }
    printf("\n%-10s %-20s %-10s %-10s %-10s\n", "Roll", "Name", "Total", "Avg", "Grade");
    for (int i = 0; i < count; i++) {
        struct Student *s = &students[i];
        char grade;
        if (s->avg >= 90) grade = 'A';
        else if (s->avg >= 80) grade = 'B';
        else if (s->avg >= 70) grade = 'C';
        else if (s->avg >= 60) grade = 'D';
        else if (s->avg >= 40) grade = 'E';
        else grade = 'F';
        printf("%-10d %-20s %-10.2f %-10.2f %-10c\n", s->roll, s->name, s->total, s->avg, grade);
    }
}

void searchByRoll() {
    int roll;
    printf("Enter roll number: ");
    scanf("%d", &roll);
    for (int i = 0; i < count; i++) {
        if (students[i].roll == roll) {
            struct Student *s = &students[i];
            printf("Roll: %d\nName: %s\nMarks: %.2f %.2f %.2f\nTotal: %.2f\nAverage: %.2f\n",
                   s->roll, s->name, s->marks[0], s->marks[1], s->marks[2], s->total, s->avg);
            return;
        }
    }
    printf("Student not found.\n");
}

void updateMarks() {
    int roll;
    printf("Enter roll number: ");
    scanf("%d", &roll);
    for (int i = 0; i < count; i++) {
        if (students[i].roll == roll) {
            struct Student *s = &students[i];
            printf("Enter new marks for 3 subjects: ");
            s->total = 0;
            for (int j = 0; j < 3; j++) {
                scanf("%f", &s->marks[j]);
                s->total += s->marks[j];
            }
            s->avg = s->total / 3;
            printf("Marks updated.\n");
            return;
        }
    }
    printf("Student not found.\n");
}

void deleteStudent() {
    int roll;
    printf("Enter roll number: ");
    scanf("%d", &roll);
    for (int i = 0; i < count; i++) {
        if (students[i].roll == roll) {
            for (int j = i; j < count - 1; j++)
                students[j] = students[j + 1];
            count--;
            printf("Student deleted.\n");
            return;
        }
    }
    printf("Student not found.\n");
}

void sortByTotal() {
    if (count < 2) {
        printf("Not enough students to sort.\n");
        return;
    }
    for (int i = 0; i < count - 1; i++) {
        for (int j = i + 1; j < count; j++) {
            if (students[i].total < students[j].total) {
                struct Student temp = students[i];
                students[i] = students[j];
                students[j] = temp;
            }
        }
    }
    printf("Sorted by total marks (descending).\n");
    displayAll();
}

void showTopScorer() {
    if (count == 0) {
        printf("No students.\n");
        return;
    }
    int top = 0;
    for (int i = 1; i < count; i++) {
        if (students[i].total > students[top].total)
            top = i;
    }
    struct Student *s = &students[top];
    printf("Top Scorer:\nRoll: %d, Name: %s, Total: %.2f, Average: %.2f\n",
           s->roll, s->name, s->total, s->avg);
}

void countPassed() {
    int passed = 0;
    for (int i = 0; i < count; i++) {
        if (students[i].avg >= 40)
            passed++;
    }
    printf("Number of students who passed (avg >= 40): %d out of %d\n", passed, count);
}