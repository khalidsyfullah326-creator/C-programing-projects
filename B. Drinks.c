#include <stdio.h>
int main()
{
    int n, x;
    float avg,sum=0;
    scanf("%d",&n);
    for(int i=0; i<n;i++)
    {
        scanf("%d",&x);
        sum=sum+x;
    }
    avg= sum/n;
    printf("%f",avg);

}
