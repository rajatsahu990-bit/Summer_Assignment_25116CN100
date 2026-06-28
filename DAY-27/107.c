#include <stdio.h>

struct Employee {
    int id;
    char name[50];
    float basic, hra, da, gross;
};

int main() {
    struct Employee e[50];
    int n, i, choice;

    printf("Enter number of employees: ");
    scanf("%d", &n);

    // Input employee details
    for (i = 0; i < n; i++) {
        printf("\nEnter details of employee %d\n", i + 1);

        printf("ID: ");
        scanf("%d", &e[i].id);

        printf("Name: ");
        scanf("%s", e[i].name);

        printf("Basic Salary: ");
        scanf("%f", &e[i].basic);

        // Salary calculations
        e[i].hra = 0.2 * e[i].basic;
        e[i].da  = 0.1 * e[i].basic;
        e[i].gross = e[i].basic + e[i].hra + e[i].da;
    }

    do {
        printf("\n=== Salary Management System ===\n");
        printf("1. Display Salary Slip\n");
        printf("2. Search Employee by ID\n");
        printf("3. Find Highest Salary\n");
        printf("4. Exit\n");
        printf("Enter choice: ");
        scanf("%d", &choice);

        if (choice == 1) {
            printf("\nSalary Details:\n");
            for (i = 0; i < n; i++) {
                printf("\nID: %d | Name: %s\n", e[i].id, e[i].name);
                printf("Basic: %.2f | HRA: %.2f | DA: %.2f | Gross: %.2f\n",
                       e[i].basic, e[i].hra, e[i].da, e[i].gross);
            }
        }

        else if (choice == 2) {
            int id, found = 0;
            printf("Enter employee ID to search: ");
            scanf("%d", &id);

            for (i = 0; i < n; i++) {
                if (e[i].id == id) {
                    printf("\nName: %s\nGross Salary: %.2f\n",
                           e[i].name, e[i].gross);
                    found = 1;
                    break;
                }
            }

            if (!found)
                printf("Employee not found.\n");
        }

        else if (choice == 3) {
            int maxIndex = 0;

            for (i = 1; i < n; i++) {
                if (e[i].gross > e[maxIndex].gross)
                    maxIndex = i;
            }

            printf("\nHighest Salary Employee:\n");
            printf("ID: %d | Name: %s | Gross Salary: %.2f\n",
                   e[maxIndex].id, e[maxIndex].name, e[maxIndex].gross);
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