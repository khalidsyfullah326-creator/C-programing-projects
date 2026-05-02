#include<stdio.h>
#include<math.h>
int main()
{
    float number[5];
    int i,pctr=0, nctr=0;
    printf("\nInput the first number: ");
    scanf("%f",&number[0]);
    printf("\nInput the second number: ");
    scanf("%f",&number[1]);
    printf("\nInput the third number: ");
    scanf("%f",&number[2]);
    printf("\nInput the forth number: ");
    scanf("%f",&number[3]);
    printf("\nInput the fifth number: ");
    scanf("%f",&number[4]);
    for(i=0; i<5; i++){
        if(number[i] > 0)
        {
            pctr++;
        }
        else if(number[i] < 0)
        {
            nctr++;
        }
    }
        printf("\nNumber of positive numbers: %d", pctr);
        printf("\nNumber of negative numbers: %d", nctr);
        printf("\n");
    }
