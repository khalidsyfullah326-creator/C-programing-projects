#include <stdio.h>
int main()
{
    int i;
    printf("Enter any number: ");
    scanf("%d",&i);
    go:
    printf("The number is lower than 10\n");
go1:
    printf("The number is higher than 10\n");
    if(i<10){
        goto go;
        }

return 0;
}
