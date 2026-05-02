#include <stdio.h>
int main()
{
    float A, B;
    float Ans;
    printf("Enter the value of A ");
    scanf("%f",&A);
    printf("Enter the value of B ");
    scanf("%f",&B);
    if(B>0)
    {
        Ans=A/B;
        printf("Division answer is %f",Ans);
    }
    else if(B==0)
    {
        printf("Undefined Number %f",Ans);
    }
    return 0;
}
