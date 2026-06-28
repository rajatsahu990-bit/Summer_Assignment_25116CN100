#include <stdio.h>
#include <string.h>

struct Book {
    int id;
    char title[50];
    char author[50];
    int issued;   // 0 = available, 1 = issued
};

int main() {
    struct Book b[50];
    int n, i, choice;

    printf("Enter number of books: ");
    scanf("%d", &n);

    // Input book details
    for (i = 0; i < n; i++) {
        printf("\nEnter details of book %d\n", i + 1);

        printf("Book ID: ");
        scanf("%d", &b[i].id);

        printf("Title: ");
        scanf("%s", b[i].title);

        printf("Author: ");
        scanf("%s", b[i].author);

        b[i].issued = 0;
    }

    do {
        printf("\n=== Library Management System ===\n");
        printf("1. Display All Books\n");
        printf("2. Search Book by ID\n");
        printf("3. Issue Book\n");
        printf("4. Return Book\n");
        printf("5. Exit\n");
        printf("Enter choice: ");
        scanf("%d", &choice);

        if (choice == 1) {
            printf("\nBook List:\n");
            for (i = 0; i < n; i++) {
                printf("ID: %d | Title: %s | Author: %s | Status: %s\n",
                       b[i].id, b[i].title, b[i].author,
                       b[i].issued ? "Issued" : "Available");
            }
        }

        else if (choice == 2) {
            int id, found = 0;
            printf("Enter book ID to search: ");
            scanf("%d", &id);

            for (i = 0; i < n; i++) {
                if (b[i].id == id) {
                    printf("Found: %s by %s (%s)\n",
                           b[i].title, b[i].author,
                           b[i].issued ? "Issued" : "Available");
                    found = 1;
                    break;
                }
            }

            if (!found)
                printf("Book not found.\n");
        }

        else if (choice == 3) {
            int id, found = 0;
            printf("Enter book ID to issue: ");
            scanf("%d", &id);

            for (i = 0; i < n; i++) {
                if (b[i].id == id) {
                    if (b[i].issued == 0) {
                        b[i].issued = 1;
                        printf("Book issued successfully.\n");
                    } else {
                        printf("Book already issued.\n");
                    }
                    found = 1;
                    break;
                }
            }

            if (!found)
                printf("Book not found.\n");
        }

        else if (choice == 4) {
            int id, found = 0;
            printf("Enter book ID to return: ");
            scanf("%d", &id);

            for (i = 0; i < n; i++) {
                if (b[i].id == id) {
                    if (b[i].issued == 1) {
                        b[i].issued = 0;
                        printf("Book returned successfully.\n");
                    } else {
                        printf("Book was not issued.\n");
                    }
                    found = 1;
                    break;
                }
            }

            if (!found)
                printf("Book not found.\n");
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