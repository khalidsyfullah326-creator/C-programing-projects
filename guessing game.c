#include <stdio.h>
int main()
{
    int secrectNumber = 6;
    int guess;
    while(guess != secrectNumber){
        printf("Enter the correct number(1-10): ");
        scanf("%d",&guess);
    }
    printf("You win");

    return 0;
}
