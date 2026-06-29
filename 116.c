#include <stdio.h>

struct Item {
    int id;
    char name[50];
    int quantity;
    float price;
};

int main() {
    struct Item i1[50];
    int n, i, choice;

    printf("Enter number of items: ");
    scanf("%d", &n);

    // Input items
    for (i = 0; i < n; i++) {
        printf("\nEnter details of item %d\n", i + 1);

        printf("Item ID: ");
        scanf("%d", &i1[i].id);

        printf("Name: ");
        scanf("%s", i1[i].name);

        printf("Quantity: ");
        scanf("%d", &i1[i].quantity);

        printf("Price: ");
        scanf("%f", &i1[i].price);
    }

    do {
        printf("\n=== Inventory Management System ===\n");
        printf("1. Display All Items\n");
        printf("2. Search Item by ID\n");
        printf("3. Update Quantity\n");
        printf("4. Find Total Value\n");
        printf("5. Exit\n");

        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {

            case 1:
                printf("\nItem List:\n");
                for (i = 0; i < n; i++) {
                    printf("ID: %d | Name: %s | Qty: %d | Price: %.2f\n",
                           i1[i].id, i1[i].name, i1[i].quantity, i1[i].price);
                }
                break;

            case 2: {
                int id, found = 0;
                printf("Enter item ID to search: ");
                scanf("%d", &id);

                for (i = 0; i < n; i++) {
                    if (i1[i].id == id) {
                        printf("Found: %s | Qty: %d | Price: %.2f\n",
                               i1[i].name, i1[i].quantity, i1[i].price);
                        found = 1;
                        break;
                    }
                }

                if (!found)
                    printf("Item not found.\n");
                break;
            }

            case 3: {
                int id, found = 0, qty;
                printf("Enter item ID: ");
                scanf("%d", &id);

                for (i = 0; i < n; i++) {
                    if (i1[i].id == id) {
                        printf("Enter new quantity: ");
                        scanf("%d", &qty);
                        i1[i].quantity = qty;
                        printf("Quantity updated.\n");
                        found = 1;
                        break;
                    }
                }

                if (!found)
                    printf("Item not found.\n");
                break;
            }

            case 4: {
                float total = 0;
                for (i = 0; i < n; i++) {
                    total += i1[i].quantity * i1[i].price;
                }
                printf("Total Inventory Value = %.2f\n", total);
                break;
            }

            case 5:
                printf("Exiting...\n");
                break;

            default:
                printf("Invalid choice!\n");
        }

    } while (choice != 5);

    return 0;
}