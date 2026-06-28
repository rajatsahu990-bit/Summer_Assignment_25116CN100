#include <stdio.h>
#include <string.h>

int main() {
    char str[200], words[20][50], temp[50];
    int i = 0, j = 0, k = 0;

    printf("Enter a sentence: ");
    fgets(str, sizeof(str), stdin);

    // Split sentence into words
    for (i = 0; str[i] != '\0'; i++) {
        if (str[i] != ' ' && str[i] != '\n') {
            words[k][j++] = str[i];
        } else {
            words[k][j] = '\0';
            k++;
            j = 0;
        }
    }

    // Sorting words by length
    for (i = 0; i < k; i++) {
        for (j = i + 1; j <= k; j++) {
            if (strlen(words[i]) > strlen(words[j])) {
                strcpy(temp, words[i]);
                strcpy(words[i], words[j]);
                strcpy(words[j], temp);
            }
        }
    }

    printf("Words sorted by length:\n");
    for (i = 0; i <= k; i++) {
        printf("%s\n", words[i]);
    }

    return 0;
}