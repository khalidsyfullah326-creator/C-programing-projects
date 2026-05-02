#include <stdio.h>
int main()
{   int m, n, i, j, sum=0;
    printf("Enter the row and coloum number: ");
    scanf("%d%d",&m,&n);
    int a[m][n];
    float avg;
    printf("Intput %d the numbers of the matrix: ",m*n);
    for(i=0; i<m; i++ )
    {
        for(j=0; j<n;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    printf("\n");
    for(i=0; i<m; i++ )
    {
        for(j=0; j<n;j++)
        {
            printf("%d ",a[i][j]);
            sum=sum+a[i][j];
        }
        printf("\n");
    }
    avg=sum/(m*n);
    printf("sum of the matrix number is %d\n",sum);
    printf("average is %f",avg);

}
