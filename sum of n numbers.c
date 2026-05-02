#include <stdio.h>
int main()
{
    int I, sum, N;
    printf("Enter the value of N ");
    scanf("%d",&N);
    I = 1;
    sum =0;
    while(I<=N){
        sum=sum+I;
        I=I+1;

    }
    printf("The sum of numbers %d",sum);
    return 0;

}
