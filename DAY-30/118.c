#include <stdio.h>

struct Book {
    int id;
    char title[50];
    char author[50];
};

int main() {
    struct Book book[50];
    int n, i, choice, id, found;

    printf("Enter number of books: ");
    scanf("%d", &n);

    // Input book details
    for (i = 0; i < n; i++) {
        printf("\nEnter details of book %d\n", i + 1);

        printf("Book ID: ");
        scanf("%d", &book[i].id);

        printf("Book Title: ");
        scanf("%s", book[i].title);

        printf("Author Name: ");
        scanf("%s", book[i].author);
    }

    do {
        printf("\n=== Mini Library System ===\n");
        printf("1. Display Books\n");
        printf("2. Search Book by ID\n");
        printf("3. Exit\n");

        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {

            case 1:
                printf("\nBook List:\n");
                for (i = 0; i < n; i++) {
                    printf("ID: %d | Title: %s | Author: %s\n",
                           book[i].id, book[i].title, book[i].author);
                }
                break;

            case 2:
                printf("Enter Book ID: ");
                scanf("%d", &id);

                found = 0;
                for (i = 0; i < n; i++) {
                    if (book[i].id == id) {
                        printf("Book Found:\n");
                        printf("ID: %d\n", book[i].id);
                        printf("Title: %s\n", book[i].title);
                        printf("Author: %s\n", book[i].author);
                        found = 1;
                        break;
                    }
                }

                if (!found)
                    printf("Book not found.\n");
                break;

            case 3:
                printf("Exiting...\n");
                break;

            default:
                printf("Invalid choice!\n");
        }

    } while (choice != 3);

    return 0;
}