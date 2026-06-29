#include <stdio.h>
#include <string.h>

#define MAX 100

// Structure
struct Student {
    int roll;
    char name[50];
    char course[30];
    float marks;
};

struct Student s[MAX];
int n = 0;

// Function declarations
void addStudent();
void displayStudents();
void searchStudent();
void topperStudent();

int main() {
    int choice;

    do {
        printf("\n=== STUDENT MANAGEMENT SYSTEM ===\n");
        printf("1. Add Student\n");
        printf("2. Display Students\n");
        printf("3. Search Student\n");
        printf("4. Find Topper\n");
        printf("5. Exit\n");

        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                addStudent();
                break;
            case 2:
                displayStudents();
                break;
            case 3:
                searchStudent();
                break;
            case 4:
                topperStudent();
                break;
            case 5:
                printf("Exiting...\n");
                break;
            default:
                printf("Invalid choice!\n");
        }

    } while (choice != 5);

    return 0;
}

// Add student
void addStudent() {
    printf("\nEnter Roll No: ");
    scanf("%d", &s[n].roll);

    printf("Enter Name: ");
    scanf("%s", s[n].name);

    printf("Enter Course: ");
    scanf("%s", s[n].course);

    printf("Enter Marks: ");
    scanf("%f", &s[n].marks);

    n++;
    printf("Student added successfully!\n");
}

// Display all students
void displayStudents() {
    int i;

    if (n == 0) {
        printf("No records found!\n");
        return;
    }

    printf("\n--- Student Records ---\n");

    for (i = 0; i < n; i++) {
        printf("Roll: %d | Name: %s | Course: %s | Marks: %.2f\n",
               s[i].roll, s[i].name, s[i].course, s[i].marks);
    }
}

// Search student by roll number
void searchStudent() {
    int roll, i, found = 0;

    printf("Enter roll number to search: ");
    scanf("%d", &roll);

    for (i = 0; i < n; i++) {
        if (s[i].roll == roll) {
            printf("Found Record:\n");
            printf("Name: %s | Course: %s | Marks: %.2f\n",
                   s[i].name, s[i].course, s[i].marks);
            found = 1;
            break;
        }
    }

    if (!found)
        printf("Student not found!\n");
}

// Find topper
void topperStudent() {
    int i, maxIndex = 0;

    if (n == 0) {
        printf("No records available!\n");
        return;
    }

    for (i = 1; i < n; i++) {
        if (s[i].marks > s[maxIndex].marks)
            maxIndex = i;
    }

    printf("\nTopper Student:\n");
    printf("Roll: %d | Name: %s | Course: %s | Marks: %.2f\n",
           s[maxIndex].roll,
           s[maxIndex].name,
           s[maxIndex].course,
           s[maxIndex].marks);
}