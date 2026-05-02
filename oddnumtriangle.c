#include<stdio.h>
int main()
{
    int n, i, a, j;
    printf("Enter the value of rows: ");
    scanf("%d",&n);
    for(i=1; i<=n; i++)
    {
        a=1;
        for(j=1;j<=i;j++){
        printf("%d",a);
        }
        printf("\n");
        a=a+2;
    }
}


