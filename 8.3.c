#include <stdio.h> // 1. ADDED: Required for scanf() and printf()

#define MAXVAL 50
#define COUNTER 11

int main() // 2. CORRECTED: Added the 'int' return type for main
{
    float value[MAXVAL];
    int i, low, high;
    // Initializing the array correctly, though {0} would suffice in C99+
    int group[COUNTER] = {0}; 

    /* .......... READING AND COUNTING .......... */
    printf("Enter %d float values:\n", MAXVAL);
    for (i = 0; i < MAXVAL; i++)
    {
        /* .......... READING OF VALUES .......... */
        if (scanf("%f", &value[i]) != 1) {
            // Simple error handling for bad input
            printf("Error reading input. Exiting.\n");
            return 1;
        }

        /* .......... COUNTING FREQUENCY OF GROUPS .......... */
        // Assuming values are non-negative and less than 110 for COUNTER=11
        int index = (int)(value[i]) / 10;
        
        // Add a check to prevent array index out of bounds if value[i] >= 110 or is negative
        if (index >= 0 && index < COUNTER) {
             ++group[index];
        } else {
             // Optional: handle values outside the expected range (0 to 109)
             // printf("Value %.2f is out of the expected range.\n", value[i]);
        }
    }

    /* .......... PRINTING OF FREQUENCY TABLE .......... */
    printf("\n");
    printf(" GROUP   RANGE   FREQUENCY\n\n");

    for (i = 0; i < COUNTER; i++)
    {
        low = i * 10;

        // The original logic for 'high' is correct for creating 10 ranges (0-9, 10-19... 90-99) 
        // and one last range (100) for the 11th counter element.
        if (i == 10)
            high = 100;
        else
            high = low + 9;

        printf("%2d  %3d to %3d  %d\n", i + 1, low, high, group[i]);
    }
    
    return 0; // Added explicit return statement
}