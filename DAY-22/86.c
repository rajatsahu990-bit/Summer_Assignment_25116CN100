#include <stdio.h>
#include <string.h>

int main() {
    char str[100];
    int i, words = 0;

    printf("Enter a sentence: ");
    fgets(str, sizeof(str), stdin);

    for (i = 0; str[i] != '\0'; i++) {
        if ((i == 0 && str[i] != ' ' && str[i] != '\n') ||
            (str[i] == ' ' && str[i + 1] != ' ' && str[i + 1] != '\0' && str[i + 1] != '\n')) {
            words++;
        }
    }

    printf("Number of words = %d\n", words);

    return 0;
}