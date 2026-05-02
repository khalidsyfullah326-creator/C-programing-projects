#include <stdio.h>
#include <math.h>
#define PI 3.1416
main()
{
    float r, Area=0;
    printf("Enter the radius of the circle ");
    scanf("%f",&r);
    Area = (PI*r*r);
    printf("The area of the circle is %f",Area);
    return 0;
}
