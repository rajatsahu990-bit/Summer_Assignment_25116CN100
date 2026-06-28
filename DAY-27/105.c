#include <stdio.h>

struct Student {
    int roll;
    char name[50];
    float marks;
};

int main() {
    struct Student s[50];
    int n, i, choice;

    printf("Enter number of students: ");
    scanf("%d", &n);

    // Input student records
    for (i = 0; i < n; i++) {
        printf("\nEnter details of student %d\n", i + 1);

        printf("Roll No: ");
        scanf("%d", &s[i].roll);

        printf("Name: ");
        scanf("%s", s[i].name);

        printf("Marks: ");
        scanf("%f", &s[i].marks);
    }

    do {
        printf("\n=== Student Management System ===\n");
        printf("1. Display All Students\n");
        printf("2. Search Student by Roll No\n");
        printf("3. Find Highest Marks\n");
        printf("4. Exit\n");
        printf("Enter choice: ");
        scanf("%d", &choice);

        if (choice == 1) {
            printf("\nStudent Records:\n");
            for (i = 0; i < n; i++) {
                printf("Roll: %d | Name: %s | Marks: %.2f\n",
                       s[i].roll, s[i].name, s[i].marks);
            }
        }

        else if (choice == 2) {
            int r, found = 0;
            printf("Enter roll no to search: ");
            scanf("%d", &r);

            for (i = 0; i < n; i++) {
                if (s[i].roll == r) {
                    printf("Found: %s with marks %.2f\n", s[i].name, s[i].marks);
                    found = 1;
                    break;
                }
            }

            if (!found)
                printf("Student not found.\n");
        }

        else if (choice == 3) {
            int maxIndex = 0;
            for (i = 1; i < n; i++) {
                if (s[i].marks > s[maxIndex].marks)
                    maxIndex = i;
            }
            printf("Topper: %s | Roll: %d | Marks: %.2f\n",
                   s[maxIndex].name, s[maxIndex].roll, s[maxIndex].marks);
        }

        else if (choice == 4) {
            printf("Exiting...\n");
        }

        else {
            printf("Invalid choice!\n");
        }

    } while (choice != 4);

    return 0;
}