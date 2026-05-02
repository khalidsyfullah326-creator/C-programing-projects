#include <stdio.h>

int main()
{
    int i, j;
    int rows;
    printf("Enter the number of rows: ");
    scanf("%d",&rows);

    for(i = 1; i <= rows; i++)
    {
        if(i % 2 != 0)   // Odd rows → Numbers
        {
            for(j = 1; j <= i; j++)
            {
                printf("%d ", j);
            }
        }
        else             // Even rows → Letters
        {
            for(j = 0; j < i; j++)
            {
                printf("%c ", 'A' + j);
            }
        }
        printf("\n");
    }

    return 0;
}
