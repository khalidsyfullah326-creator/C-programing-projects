 #include<stdio.h>
#define PI 3.1416

int main()
{
    int R, C;
    float perimeter, area;

    C = PI;      // C becomes 3
    R = 5;

    perimeter = 2 * PI * R;
    area = PI * R * R;

    printf("%d %d", &perimeter, &area);
    return 0;
}

