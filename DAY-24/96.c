#include <stdio.h>
#include <string.h>

int main() {
    char str[100], result[100];
    int i, j, k = 0, flag;

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    for (i = 0; str[i] != '\0'; i++) {

        if (str[i] == '\n')
            continue;

        flag = 0;

        for (j = 0; j < k; j++) {
            if (result[j] == str[i]) {
                flag = 1;
                break;
            }
        }

        if (!flag) {
            result[k++] = str[i];
        }
    }

    result[k] = '\0';

    printf("String after removing duplicates: %s\n", result);

    return 0;
}