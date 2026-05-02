#include <stdio.h>
int main()
{
    int x, y, temp, i,sum=0;
    printf("Enter the first integer\n");
    scanf("%d",&x);
    printf("Enter the second integer\n");
    scanf("%d",&y);
    if(x>y){
        temp = y;
        y = x;
        x = temp;
    }
    for(i = x; i<= y; i++){
        if((i % 5) ==0){
            sum += i;
        }
    }
    printf("\nSum: %d\n", sum);
    return 0;
}
