#include <stdio.h>
#include <string.h>

int main() {
    char str[100];
    int i, j, len;

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    len = strlen(str);

    for (i = 0; i < len; i++) {
        if (str[i] == '\n')
            continue;

        for (j = i + 1; j < len; j++) {
            if (str[i] == str[j]) {
                printf("First repeating character: %c\n", str[i]);
                return 0;
            }
        }
    }

    printf("No repeating character found.\n");

    return 0;
}