#include <stdio.h>
#include <string.h>

int main() {
    int n;
    scanf("%d", &n);   // number of operations

    int x = 0;         // initial value of X
    char s[5];         // string to store operation

    for (int i = 0; i < n; i++) {
        scanf("%s", s);     // read operation

        if (strchr(s, '+')) {
            x++;            // if contains '+', increase X
        } else {
            x--;            // otherwise decrease X
        }
    }

    printf("%d\n", x);      // print final result
    return 0;
}

