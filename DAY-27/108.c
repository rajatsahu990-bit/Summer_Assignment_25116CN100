#include <stdio.h>

struct Student {
    int roll;
    char name[50];
    int m1, m2, m3;
    int total;
    float percent;
};

int main() {
    struct Student s[50];
    int n, i, choice;

    printf("Enter number of students: ");
    scanf("%d", &n);

    // Input student details
    for (i = 0; i < n; i++) {
        printf("\nEnter details of student %d\n", i + 1);

        printf("Roll No: ");
        scanf("%d", &s[i].roll);

        printf("Name: ");
        scanf("%s", s[i].name);

        printf("Marks of 3 subjects: ");
        scanf("%d %d %d", &s[i].m1, &s[i].m2, &s[i].m3);

        // Calculations
        s[i].total = s[i].m1 + s[i].m2 + s[i].m3;
        s[i].percent = s[i].total / 3.0;
    }

    do {
        printf("\n=== Marksheet Generation System ===\n");
        printf("1. Display All Marksheet\n");
        printf("2. Search Student by Roll No\n");
        printf("3. Topper Student\n");
        printf("4. Exit\n");
        printf("Enter choice: ");
        scanf("%d", &choice);

        if (choice == 1) {
            printf("\n--- Marksheet ---\n");
            for (i = 0; i < n; i++) {
                printf("\nRoll: %d | Name: %s\n", s[i].roll, s[i].name);
                printf("Marks: %d %d %d\n", s[i].m1, s[i].m2, s[i].m3);
                printf("Total: %d | Percentage: %.2f%%\n",
                       s[i].total, s[i].percent);
            }
        }

        else if (choice == 2) {
            int r, found = 0;
            printf("Enter roll no to search: ");
            scanf("%d", &r);

            for (i = 0; i < n; i++) {
                if (s[i].roll == r) {
                    printf("\nName: %s\nTotal: %d\nPercentage: %.2f%%\n",
                           s[i].name, s[i].total, s[i].percent);
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
                if (s[i].total > s[maxIndex].total)
                    maxIndex = i;
            }

            printf("\nTopper Student:\n");
            printf("Roll: %d | Name: %s | Total: %d | Percentage: %.2f%%\n",
                   s[maxIndex].roll, s[maxIndex].name,
                   s[maxIndex].total, s[maxIndex].percent);
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