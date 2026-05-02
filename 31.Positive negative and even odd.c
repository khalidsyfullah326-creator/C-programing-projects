#include <stdio.h>
int main()
{
    int i;
    printf("Enter the integer ");
    scanf("%d",&i);
    if(i==0)
    {
        printf("Positive\n");
    }
    else if(i < 0 && i%2 != 0)
    {
        printf("Negative odd number\n");
    }
    else if(i < 0 && i%2 == 0)
    {
        printf("Negative even number\n");}
        else if(i >0 && (i%2) ==0)
        {
            printf("Positive and even number\n");
        }
        else if(i >0 && i%2 != 0)
        {
            printf("Positive and odd number\n");
        }
        return 0;
    }
