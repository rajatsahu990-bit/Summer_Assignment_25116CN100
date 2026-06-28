#include <stdio.h>

struct Employee {
    int id;
    char name[50];
    float salary;
};

int main() {
    struct Employee e[50];
    int n, i, choice;

    printf("Enter number of employees: ");
    scanf("%d", &n);

    // Input employee records
    for (i = 0; i < n; i++) {
        printf("\nEnter details of employee %d\n", i + 1);

        printf("ID: ");
        scanf("%d", &e[i].id);

        printf("Name: ");
        scanf("%s", e[i].name);

        printf("Salary: ");
        scanf("%f", &e[i].salary);
    }

    do {
        printf("\n=== Employee Record Management System ===\n");
        printf("1. Display All Employees\n");
        printf("2. Search Employee by ID\n");
        printf("3. Find Highest Salary\n");
        printf("4. Exit\n");
        printf("Enter choice: ");
        scanf("%d", &choice);

        if (choice == 1) {
            printf("\nEmployee Records:\n");
            for (i = 0; i < n; i++) {
                printf("ID: %d | Name: %s | Salary: %.2f\n",
                       e[i].id, e[i].name, e[i].salary);
            }
        }

        else if (choice == 2) {
            int id, found = 0;
            printf("Enter employee ID to search: ");
            scanf("%d", &id);

            for (i = 0; i < n; i++) {
                if (e[i].id == id) {
                    printf("Found: %s with salary %.2f\n",
                           e[i].name, e[i].salary);
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
                if (e[i].salary > e[maxIndex].salary)
                    maxIndex = i;
            }

            printf("Highest Salary Employee:\n");
            printf("ID: %d | Name: %s | Salary: %.2f\n",
                   e[maxIndex].id, e[maxIndex].name, e[maxIndex].salary);
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