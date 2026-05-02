#include <stdio.h>

int main() {
    int n, k, l, c, d, p, nl, np;

    scanf("%d %d %d %d %d %d %d %d",
          &n, &k, &l, &c, &d, &p, &nl, &np);

    int total_drink = k * l;
    int total_slices = c * d;

    int drink_toasts = total_drink / nl;
    int lime_toasts = total_slices;
    int salt_toasts = p / np;

    int min_toasts = drink_toasts;

    if (lime_toasts < min_toasts)
        min_toasts = lime_toasts;

    if (salt_toasts < min_toasts)
        min_toasts = salt_toasts;

    printf("%d\n", min_toasts / n);

    return 0;
}

