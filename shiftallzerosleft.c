#include <stdio.h>

int main() {
    int n, arr[100], result[100], i, index = 0;

    scanf("%d", &n);

    for(i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    // First store zeros
    for(i = 0; i < n; i++)
        if(arr[i] == 0)
            result[index++] = 0;

    // Then store non-zeros
    for(i = 0; i < n; i++)
        if(arr[i] != 0)
            result[index++] = arr[i];

    for(i = 0; i < n; i++)
        printf("%d ", result[i]);

    return 0;
}

