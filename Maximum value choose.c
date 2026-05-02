#include<stdio.h>
int main()
{
    int x, y, z;
    printf("\nInput the first integer x: ");
    scanf("%d", &x);
    printf("\nInput the second integer y: ");
    scanf("%d", &y);
    printf("\nInput the third integer z: ");
    scanf("%d", &z);
    if(x>y&&y>z)
    {
        printf("x is maiximum");
    }
    else if(y>x&&x>z)
    {
        printf("y is maximum");
    }
    else if(y>z&&z>x)
    {
        printf("y is maximum");
    }
    else if(z>x&&x>y)
    {
        printf("z is maximum");
    }
     else if(z>y&&y>x)
    {
        printf("z is maximum");
    }
        return 0;
}
