#include <stdio.h>
#include <string.h>

int main() {
    char str[100];
    int i, j, len;

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    len = strlen(str);

    for (i = 0; i < len; i++) {
        int count = 1;

        if (str[i] == '0')
            continue;

        for (j = i + 1; j < len; j++) {
            if (str[i] == str[j]) {
                count++;
                str[j] = '0';   // Mark counted character
            }
        }

        if (str[i] != '0' && str[i] != '\n')
            printf("%c = %d\n", str[i], count);
    }

    return 0;
}