#include <stdio.h>
int main()
{
    int i, n;
    float sum=0;
    printf("Enter the value of n ");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        sum=1.0/i;
    }
    printf("%f",sum);
}
