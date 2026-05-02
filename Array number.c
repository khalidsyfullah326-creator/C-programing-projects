#include <stdio.h>
int main()
{
    int a[3];
    a[0]=5;
    a[1]=9;
    a[2]=10;
    int x = a[2]+a[1]-a[0];
    printf("%d",x);
    return 0;
}
