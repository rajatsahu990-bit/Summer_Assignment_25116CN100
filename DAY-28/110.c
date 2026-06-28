#include <stdio.h>

struct Account {
    int accNo;
    char name[50];
    float balance;
};

int main() {
    struct Account a[50];
    int n, i, choice;

    printf("Enter number of accounts: ");
    scanf("%d", &n);

    // Input account details
    for (i = 0; i < n; i++) {
        printf("\nEnter details of account %d\n", i + 1);

        printf("Account No: ");
        scanf("%d", &a[i].accNo);

        printf("Name: ");
        scanf("%s", a[i].name);

        printf("Initial Balance: ");
        scanf("%f", &a[i].balance);
    }

    do {
        printf("\n=== Bank Account System ===\n");
        printf("1. Display All Accounts\n");
        printf("2. Deposit Money\n");
        printf("3. Withdraw Money\n");
        printf("4. Search Account\n");
        printf("5. Exit\n");
        printf("Enter choice: ");
        scanf("%d", &choice);

        if (choice == 1) {
            printf("\nAccount Details:\n");
            for (i = 0; i < n; i++) {
                printf("AccNo: %d | Name: %s | Balance: %.2f\n",
                       a[i].accNo, a[i].name, a[i].balance);
            }
        }

        else if (choice == 2) {
            int acc, found = 0;
            float amt;

            printf("Enter account no: ");
            scanf("%d", &acc);

            for (i = 0; i < n; i++) {
                if (a[i].accNo == acc) {
                    printf("Enter deposit amount: ");
                    scanf("%f", &amt);

                    if (amt > 0) {
                        a[i].balance += amt;
                        printf("Deposit successful.\n");
                    }
                    found = 1;
                    break;
                }
            }

            if (!found)
                printf("Account not found.\n");
        }

        else if (choice == 3) {
            int acc, found = 0;
            float amt;

            printf("Enter account no: ");
            scanf("%d", &acc);

            for (i = 0; i < n; i++) {
                if (a[i].accNo == acc) {
                    printf("Enter withdrawal amount: ");
                    scanf("%f", &amt);

                    if (amt > 0 && amt <= a[i].balance) {
                        a[i].balance -= amt;
                        printf("Withdrawal successful.\n");
                    } else {
                        printf("Insufficient balance or invalid amount.\n");
                    }
                    found = 1;
                    break;
                }
            }

            if (!found)
                printf("Account not found.\n");
        }

        else if (choice == 4) {
            int acc, found = 0;

            printf("Enter account no to search: ");
            scanf("%d", &acc);

            for (i = 0; i < n; i++) {
                if (a[i].accNo == acc) {
                    printf("Found: %s | Balance: %.2f\n",
                           a[i].name, a[i].balance);
                    found = 1;
                    break;
                }
            }

            if (!found)
                printf("Account not found.\n");
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