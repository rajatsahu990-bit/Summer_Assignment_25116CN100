#include <stdio.h>

struct Contact {
    int id;
    char name[50];
    char phone[15];
    char email[50];
};

int main() {
    struct Contact c[50];
    int n, i, choice;

    printf("Enter number of contacts: ");
    scanf("%d", &n);

    // Input contact details
    for (i = 0; i < n; i++) {
        printf("\nEnter details of contact %d\n", i + 1);

        printf("ID: ");
        scanf("%d", &c[i].id);

        printf("Name: ");
        scanf("%s", c[i].name);

        printf("Phone: ");
        scanf("%s", c[i].phone);

        printf("Email: ");
        scanf("%s", c[i].email);
    }

    do {
        printf("\n=== Contact Management System ===\n");
        printf("1. Display All Contacts\n");
        printf("2. Search Contact by ID\n");
        printf("3. Update Phone Number\n");
        printf("4. Delete Contact\n");
        printf("5. Exit\n");
        printf("Enter choice: ");
        scanf("%d", &choice);

        if (choice == 1) {
            printf("\nContact List:\n");
            for (i = 0; i < n; i++) {
                printf("ID: %d | Name: %s | Phone: %s | Email: %s\n",
                       c[i].id, c[i].name, c[i].phone, c[i].email);
            }
        }

        else if (choice == 2) {
            int id, found = 0;

            printf("Enter ID to search: ");
            scanf("%d", &id);

            for (i = 0; i < n; i++) {
                if (c[i].id == id) {
                    printf("Found: %s | Phone: %s | Email: %s\n",
                           c[i].name, c[i].phone, c[i].email);
                    found = 1;
                    break;
                }
            }

            if (!found)
                printf("Contact not found.\n");
        }

        else if (choice == 3) {
            int id, found = 0;

            printf("Enter ID to update phone: ");
            scanf("%d", &id);

            for (i = 0; i < n; i++) {
                if (c[i].id == id) {
                    printf("Enter new phone number: ");
                    scanf("%s", c[i].phone);
                    printf("Phone updated successfully.\n");
                    found = 1;
                    break;
                }
            }

            if (!found)
                printf("Contact not found.\n");
        }

        else if (choice == 4) {
            int id, found = 0;

            printf("Enter ID to delete: ");
            scanf("%d", &id);

            for (i = 0; i < n; i++) {
                if (c[i].id == id) {
                    // Shift elements left
                    for (int j = i; j < n - 1; j++) {
                        c[j] = c[j + 1];
                    }
                    n--;
                    printf("Contact deleted successfully.\n");
                    found = 1;
                    break;
                }
            }

            if (!found)
                printf("Contact not found.\n");
        }

        else if (choice == 5) {
            printf("Exiting...\n");
        }

        else {
            printf("Invalid choice!\n");
        }

    } while (choice != 5);

    return 0;
}