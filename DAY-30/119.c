#include <stdio.h>

struct Employee {
    int id;
    char name[50];
    char department[30];
    float salary;
};

int main() {
    struct Employee emp[50];
    int n, i, choice, id, found;

    printf("Enter number of employees: ");
    scanf("%d", &n);

    // Input employee details
    for (i = 0; i < n; i++) {
        printf("\nEnter details of employee %d\n", i + 1);

        printf("Employee ID: ");
        scanf("%d", &emp[i].id);

        printf("Employee Name: ");
        scanf("%s", emp[i].name);

        printf("Department: ");
        scanf("%s", emp[i].department);

        printf("Salary: ");
        scanf("%f", &emp[i].salary);
    }

    do {
        printf("\n=== Mini Employee Management System ===\n");
        printf("1. Display Employees\n");
        printf("2. Search Employee by ID\n");
        printf("3. Find Highest Salary\n");
        printf("4. Exit\n");

        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {

            case 1:
                printf("\nEmployee List:\n");
                for (i = 0; i < n; i++) {
                    printf("ID: %d | Name: %s | Department: %s | Salary: %.2f\n",
                           emp[i].id, emp[i].name,
                           emp[i].department, emp[i].salary);
                }
                break;

            case 2:
                printf("Enter Employee ID: ");
                scanf("%d", &id);

                found = 0;
                for (i = 0; i < n; i++) {
                    if (emp[i].id == id) {
                        printf("Employee Found:\n");
                        printf("ID: %d\n", emp[i].id);
                        printf("Name: %s\n", emp[i].name);
                        printf("Department: %s\n", emp[i].department);
                        printf("Salary: %.2f\n", emp[i].salary);
                        found = 1;
                        break;
                    }
                }

                if (!found)
                    printf("Employee not found.\n");
                break;

            case 3: {
                int maxIndex = 0;

                for (i = 1; i < n; i++) {
                    if (emp[i].salary > emp[maxIndex].salary)
                        maxIndex = i;
                }

                printf("\nHighest Salary Employee:\n");
                printf("ID: %d\n", emp[maxIndex].id);
                printf("Name: %s\n", emp[maxIndex].name);
                printf("Department: %s\n", emp[maxIndex].department);
                printf("Salary: %.2f\n", emp[maxIndex].salary);
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