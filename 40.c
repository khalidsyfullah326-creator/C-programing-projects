40#include <stdio.h>

int main() {
    int number;

    printf("Enter a number: ");
    scanf("%d", &number);

    if (number <40) {
        printf("The number is Fail.\n");
    }
    else if (number >= 40 && number<=100) {
        printf("The number is Pass.\n");
    }
    else if(number >100){
        printf("The number is wrong.\n");
    }

    return 0;
}
