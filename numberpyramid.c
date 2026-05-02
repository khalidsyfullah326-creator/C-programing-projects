#include <stdio.h>
int main()
{
    int n;
    printf("Enter the number of rows: ");
    scanf("%d",&n);
    int nsp= n-1;
    for(int i=1;i<=n;i++)
    {
        for(int k=1;k<=n-i;k++) //for spaces
        {
            printf("  ");
        }
        for(int j=1;j<=i;j++) //for number triangle
        {
            printf("%d ",j);
        }
        int a=i-1;
        for(int l=1;l<=i-1;l++)
        {
            printf("%d ",a);
            a--;
        }
        printf("\n");

    }
}
