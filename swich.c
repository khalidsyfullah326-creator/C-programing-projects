#include <stdio.h>

int main()
{
    int a;
    printf("Enter a number: ");
    scanf("%d", &a);
    switch(a)
    {
    case 1:
        printf("saturday\n");
        break;
    case 2:
        printf("Sunday\n");
        break;
    case 3:
        printf("Monday\n");
        break;
    case 4:
        printf("Tuesday\n");
        break;
    case 5:
        printf("Wednesday\n");
        break;
    case 6:
        printf("Thusday\n");
        break;
    case 7:
        printf("Friday\n");
        break;
    }
    return 0;
}

