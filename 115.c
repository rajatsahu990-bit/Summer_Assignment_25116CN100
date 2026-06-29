#include <stdio.h>
#include <string.h>

int main() {
    char str[200], str2[200];
    int choice, len, i;

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    // remove newline if present
    str[strcspn(str, "\n")] = '\0';

    do {
        printf("\n=== Menu Driven String Operations ===\n");
        printf("1. Length of String\n");
        printf("2. Copy String\n");
        printf("3. Reverse String\n");
        printf("4. Compare Strings\n");
        printf("5. Concatenate Strings\n");
        printf("6. Exit\n");

        printf("Enter your choice: ");
        scanf("%d", &choice);
        getchar(); // to clear newline

        switch (choice) {

            case 1:
                len = strlen(str);
                printf("Length = %d\n", len);
                break;

            case 2:
                strcpy(str2, str);
                printf("Copied String: %s\n", str2);
                break;

            case 3:
                printf("Reversed String: ");
                for (i = strlen(str) - 1; i >= 0; i--) {
                    printf("%c", str[i]);
                }
                printf("\n");
                break;

            case 4:
                printf("Enter another string: ");
                fgets(str2, sizeof(str2), stdin);
                str2[strcspn(str2, "\n")] = '\0';

                if (strcmp(str, str2) == 0)
                    printf("Strings are equal.\n");
                else
                    printf("Strings are not equal.\n");
                break;

            case 5:
                printf("Enter another string: ");
                fgets(str2, sizeof(str2), stdin);
                str2[strcspn(str2, "\n")] = '\0';

                strcat(str, str2);
                printf("Concatenated String: %s\n", str);
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