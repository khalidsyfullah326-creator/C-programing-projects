#include<stdio.h>
int main()
{
    char char1 = 'X';
    char char2 = 'Y';
    char char3 = 'Z';
    printf("The reverse of %c%c%C is %c%c%C\n",
           char1, char2, char3,
           char3, char2, char1);
           return 0;
}
