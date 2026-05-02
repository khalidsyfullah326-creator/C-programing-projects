#include <stdio.h>
int main() {
    int rows, i, j, count = 1;

    printf("Enter the number of rows: ");
    scanf("%d", &rows);

    // Outer loop for rows
    for (i = 1; i <= rows; i++) {
        // Inner loop for printing numbers
        for (j = 1; j <= i; j++) {
            printf("%d ", count);
            count++; // Increment the number
        }
        printf("\n"); // Move to next line
    }

    return 0;
}
