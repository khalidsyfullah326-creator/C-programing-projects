#include <stdio.h>
#include <math.h>
int main()
{
    int a, b ,c, D, x1, x2;
    printf("Enter the value of a");
    scanf("%d",&a);
    printf("Enter the value of b");
    scanf("%d",&b);
    printf("Enter the value of c");
    scanf("%d",&c);
    D =(b*b)-4ac;
    if(D>0){
        x1=(-b+squrtD)/2a;
        x2=(-b-squrtD)/2a;
        printf("x1=%d",x1);
        printf("x2=%d",x2);
    }return 0;
}
