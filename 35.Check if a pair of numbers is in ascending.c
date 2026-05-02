#include <stdio.h>
int main()
{
    int x, y;
    printf("Enter the first number: ");
    scanf("%d",&x);
    printf("Enter the second number: ");
    scanf("%d",&y);
    if(x>y){
        printf("The pair is in descending order");
    }
    else if(y>x){
        printf("The pair is in ascending pair");
    }
    return 0;
}
