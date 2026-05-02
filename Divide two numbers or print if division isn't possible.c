#include<stdio.h>
int main()
{
    int x, y;
    float div_result;
    printf("Enter the value of x: ");
    scanf("%d",&x);
    printf("Enter the value of y: ");
    scanf("%d",&y);
    if(y != 0){
        div_result = x/y;
        printf("%.1f\n",div_result);
    }
    else{
        printf("Division not possible");
    }
    return 0;
}
