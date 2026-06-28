#include <stdio.h>
#include <string.h>

int main() {
    char str[100];
    int i, j, len, count;

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    len = strlen(str);

    for (i = 0; i < len; i++) {
        if (str[i] == '\n')
            continue;

        count = 0;

        for (j = 0; j < len; j++) {
            if (str[i] == str[j])
                count++;
        }

        if (count == 1) {
            printf("First non-repeating character: %c\n", str[i]);
            return 0;
        }
    }

    printf("No non-repeating character found.\n");

    return 0;
}