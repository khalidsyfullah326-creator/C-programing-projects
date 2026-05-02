#include<stdio.h>
int main()
{
    int x[2][3]={12,23,33,22,11,43};
    printf("%d\n",x[0][0]);
    int y= x[0][0]+x[1][1];
    printf("%d",y);
    return 0;
}
