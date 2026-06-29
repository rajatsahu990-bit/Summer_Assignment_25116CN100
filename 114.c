#include <stdio.h>

int main() {
    int arr[100], n, i, choice, pos, value;

    printf("Enter size of array: ");
    scanf("%d", &n);

    printf("Enter elements:\n");
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    do {
        printf("\n=== Menu Driven Array Operations ===\n");
        printf("1. Display Array\n");
        printf("2. Insert Element\n");
        printf("3. Delete Element\n");
        printf("4. Search Element\n");
        printf("5. Update Element\n");
        printf("6. Exit\n");

        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {

            case 1:
                printf("Array Elements: ");
                for (i = 0; i < n; i++) {
                    printf("%d ", arr[i]);
                }
                printf("\n");
                break;

            case 2:
                printf("Enter position and value: ");
                scanf("%d %d", &pos, &value);

                if (pos >= 0 && pos <= n) {
                    for (i = n; i > pos; i--) {
                        arr[i] = arr[i - 1];
                    }
                    arr[pos] = value;
                    n++;
                    printf("Element inserted.\n");
                } else {
                    printf("Invalid position.\n");
                }
                break;

            case 3:
                printf("Enter position to delete: ");
                scanf("%d", &pos);

                if (pos >= 0 && pos < n) {
                    for (i = pos; i < n - 1; i++) {
                        arr[i] = arr[i + 1];
                    }
                    n--;
                    printf("Element deleted.\n");
                } else {
                    printf("Invalid position.\n");
                }
                break;

            case 4:
                printf("Enter element to search: ");
                scanf("%d", &value);

                for (i = 0; i < n; i++) {
                    if (arr[i] == value) {
                        printf("Element found at position %d\n", i);
                        break;
                    }
                }
                if (i == n)
                    printf("Element not found.\n");
                break;

            case 5:
                printf("Enter position and new value: ");
                scanf("%d %d", &pos, &value);

                if (pos >= 0 && pos < n) {
                    arr[pos] = value;
                    printf("Element updated.\n");
                } else {
                    printf("Invalid position.\n");
                }
                break;

            case 6:
                printf("Exiting...\n");
                break;

            default:
                printf("Invalid choice!\n");
        }

    } while (choice != 6);

    return 0;
}