#include <stdio.h>
int main()
{
    int a[5],b[5],ab[5];
    int i;
    printf("Enter the values of A\n");
    for(i=0; i<5; i++)
    {
      scanf("%d",&a[i]);
    }
    printf("Enter the values of B\n");
    for(i=0; i<5; i++)
    {
      scanf("%d",&b[i]);
    }
    for(i=0; i<5; i++)
    {
      ab[i] =a[i] + b[i];
    }
    printf("The value of AB Array :\n");
    for(i=1;i>=5;i++)
    {
        printf("%d",ab[i]);
    }
    return 0;
}
