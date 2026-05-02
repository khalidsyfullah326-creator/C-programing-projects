#include <stdio.h>
int main()
{
    int t,i;
    scanf("%d",&t);
    for(i=0;i<=t;i++)
    {
        int a, b;
    scanf("%d%d",&a,&b);
    if(a>b)
    {
       if(a%b==0)
       {
           printf("%d",a%b);
       }
       else
       {
          printf("%d\n",b-a%b);
       }
    }
    else if(b>a)
        printf("%d\n",b-a);
}
}
