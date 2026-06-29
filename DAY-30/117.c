#include <stdio.h>

struct Student {
    int roll;
    char name[50];
    char course[30];
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

        printf("Course: ");
        scanf("%s", s[i].course);

        printf("Marks: ");
        scanf("%f", &s[i].marks);
    }

    do {
        printf("\n=== Student Record System ===\n");
        printf("1. Display All Students\n");
        printf("2. Search by Roll No\n");
        printf("3. Find Topper\n");
        printf("4. Exit\n");

        printf("Enter choice: ");
        scanf("%d", &choice);

        switch (choice) {

            case 1:
                printf("\nStudent List:\n");
                for (i = 0; i < n; i++) {
                    printf("Roll: %d | Name: %s | Course: %s | Marks: %.2f\n",
                           s[i].roll, s[i].name, s[i].course, s[i].marks);
                }
                break;

            case 2: {
                int r, found = 0;
                printf("Enter roll no to search: ");
                scanf("%d", &r);

                for (i = 0; i < n; i++) {
                    if (s[i].roll == r) {
                        printf("Found: %s | Course: %s | Marks: %.2f\n",
                               s[i].name, s[i].course, s[i].marks);
                        found = 1;
                        break;
                    }
                }

                if (!found)
                    printf("Student not found.\n");
                break;
            }

            case 3: {
                int maxIndex = 0;

                for (i = 1; i < n; i++) {
                    if (s[i].marks > s[maxIndex].marks)
                        maxIndex = i;
                }

                printf("Topper Student:\n");
                printf("Roll: %d | Name: %s | Course: %s | Marks: %.2f\n",
                       s[maxIndex].roll, s[maxIndex].name,
                       s[maxIndex].course, s[maxIndex].marks);
                break;
            }

            case 4:
                printf("Exiting...\n");
                break;

            default:
                printf("Invalid choice!\n");
        }

    } while (choice != 4);

    return 0;
}