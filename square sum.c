#include<stdio.h>
int main()
{
    int i, sum;
    for(i=5; i<=10; i++)
    {
        sum=sum+(i*i);
    }
    printf("%d\n",sum);
    return 0;
}
