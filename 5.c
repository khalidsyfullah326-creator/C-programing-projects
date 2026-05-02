#include <stdio.h>
int main()
{
    int num;
    printf("Enter any number : ");
    scanf("%d",&num);
    printf("%d",num);
    if(num%5==0)
    {
        printf("Divisible");
    }
    else
    {
        printf("Not Divisible");
    }
}
