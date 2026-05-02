#include<stdio.h>
int main()
{
    int n, a;
    printf("Enter the value of rows: ");
    scanf("%d",&n);
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n-i;j++)
        {
            printf(" ");
        }
        a=1;
        for(int k=0;k<i;k++)
        {
            printf("%d ",a);
            a=a*(i-k)/(k+1);
        }
        printf("\n");
    }
}
