#include <stdio.h>
int main()
{
    int x;    // Variable to store total distance in km
    float y;  // Variable to store total fuel spent in liters
    float average;

    printf("Input total distance in km: ");
    scanf("%d",&x);

    printf("Input total fuel spent in liters: ");
    scanf("%f", &y);
    average=x/y;

    printf("\nAverage consumption (km/lt) %f ",average);
    return 0;
}

