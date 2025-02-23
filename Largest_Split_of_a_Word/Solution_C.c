#include <stdio.h>
#include <string.h>

void answerString(char *word, int n, char *result) {
    if (n == 1) {
        strcpy(result, word);
        return;
    }

    int max_len = strlen(word) - n + 1;
    char max_char = word[0];

    for (int i = 1; i < strlen(word); i++) {
        if (word[i] > max_char) {
            max_char = word[i];
        }
    }

    result[0] = '\0';

    for (int i = 0; i < strlen(word); i++) {
        if (word[i] == max_char) {
            char temp[100];
            strncpy(temp, &word[i], max_len);
            temp[max_len] = '\0';
            if (strcmp(result, temp) < 0) {
                strcpy(result, temp);
            }
        }
    }
}

int main() {
    int t;
    scanf("%d", &t);
    while (t--) {
        char word[100];
        int n;
        scanf("%s %d", word, &n);
        char ans[100];
        answerString(word, n, ans);
        printf("%s\n", ans);
    }
    return 0;
}
