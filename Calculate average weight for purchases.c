#include<stdio.h>
int  main()
{
    double w1, w2, c1, c2,result; //Declare variable for weights and counts
    printf("Weight -Item1: ");
    scanf("%lf",&w1);
    printf("Item1 count: ");
    scanf("%lf",&c1);
    printf("Weight -Item2: ");
    scanf("%lf",&w2);
    printf("Item2 count: ");
    scanf("%lf",&c2);
    result=((w1*c1)+(w2*c2))/(c1+c2);
    printf("Average value %lf",result);
    return 0;




}
