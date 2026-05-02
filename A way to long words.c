#include <stdio.h>
#include <string.h>

int main() {
    int n;
    scanf("%d", &n);

    while (n--) {
        char word[101];
        scanf("%s", word);

        int len = strlen(word);

        if (len <= 10) {
            printf("%s", word);
        } else {
            printf("%c%d%c", word[0], len - 2, word[len - 1]);
        }
        printf("\n");
    }

    return 0;
}
