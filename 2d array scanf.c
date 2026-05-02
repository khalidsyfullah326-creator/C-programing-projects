#include <stdio.h>
int main()
{
    int x[3][3],i,j,sum=0;
    printf("Enter the value of 3*3 values\n");
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++){
            scanf("%d",&x[i][j]);
        }
    }
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++){
            printf("%d ",x[i][j]);
            sum = sum + x[i][j];
        }
        printf("\n");
    }
    float avg = sum / 9.0;
    printf("average value is : %f",avg);
    return 0;

}
