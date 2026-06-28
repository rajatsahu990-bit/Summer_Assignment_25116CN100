#include <stdio.h>

struct Ticket {
    int id;
    char name[50];
    int seats;
    float price;
};

int main() {
    struct Ticket t[50];
    int n, i, choice;

    printf("Enter number of bookings: ");
    scanf("%d", &n);

    // Input booking details
    for (i = 0; i < n; i++) {
        printf("\nEnter details for booking %d\n", i + 1);

        printf("Ticket ID: ");
        scanf("%d", &t[i].id);

        printf("Name: ");
        scanf("%s", t[i].name);

        printf("Number of seats: ");
        scanf("%d", &t[i].seats);

        t[i].price = t[i].seats * 150.0; // fixed price per seat
    }

    do {
        printf("\n=== Ticket Booking System ===\n");
        printf("1. Display All Bookings\n");
        printf("2. Search Booking by ID\n");
        printf("3. Book More Seats\n");
        printf("4. Cancel Seats\n");
        printf("5. Exit\n");
        printf("Enter choice: ");
        scanf("%d", &choice);

        if (choice == 1) {
            printf("\nBooking Details:\n");
            for (i = 0; i < n; i++) {
                printf("ID: %d | Name: %s | Seats: %d | Price: %.2f\n",
                       t[i].id, t[i].name, t[i].seats, t[i].price);
            }
        }

        else if (choice == 2) {
            int id, found = 0;
            printf("Enter ticket ID to search: ");
            scanf("%d", &id);

            for (i = 0; i < n; i++) {
                if (t[i].id == id) {
                    printf("Found: %s | Seats: %d | Price: %.2f\n",
                           t[i].name, t[i].seats, t[i].price);
                    found = 1;
                    break;
                }
            }

            if (!found)
                printf("Booking not found.\n");
        }

        else if (choice == 3) {
            int id, add, found = 0;

            printf("Enter ticket ID: ");
            scanf("%d", &id);

            for (i = 0; i < n; i++) {
                if (t[i].id == id) {
                    printf("Enter seats to add: ");
                    scanf("%d", &add);

                    t[i].seats += add;
                    t[i].price = t[i].seats * 150.0;

                    printf("Seats added successfully.\n");
                    found = 1;
                    break;
                }
            }

            if (!found)
                printf("Booking not found.\n");
        }

        else if (choice == 4) {
            int id, cancel, found = 0;

            printf("Enter ticket ID: ");
            scanf("%d", &id);

            for (i = 0; i < n; i++) {
                if (t[i].id == id) {
                    printf("Enter seats to cancel: ");
                    scanf("%d", &cancel);

                    if (cancel <= t[i].seats) {
                        t[i].seats -= cancel;
                        t[i].price = t[i].seats * 150.0;
                        printf("Seats cancelled successfully.\n");
                    } else {
                        printf("Invalid cancellation.\n");
                    }

                    found = 1;
                    break;
                }
            }

            if (!found)
                printf("Booking not found.\n");
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