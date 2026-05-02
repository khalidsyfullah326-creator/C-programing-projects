#include <stdio.h>
int main()
{
    long long n, f;
    scanf("%lld",&n);
    if(n%2==0)
    {
        f=n/2;
        printf("%lld",f);
    }
    else{
        f=n/2-n;
    printf("%lld",f);
}
}
