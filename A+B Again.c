#include<stdio.h>
int main()
{
    int t,n,sum=0;
    printf("Enter the test cases number t(1<=t && t<=90) \n");
    scanf("%d",&t);
    while(t--)
    {
       scanf("%d",&n);
       if(10<=n && n<=99)
       {
        sum=n/10 + n%10;
        printf("%d\n",sum);
       }
    }
    return 0;
}
