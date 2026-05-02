#include <stdio.h>
void print_divisor(int x){
    int i;
    for(i=1;i<=x;i++){
        if(x%i==0){
            printf("%d\n",i);
        }
    }
}
int main()
{
    int z;
    printf("Enter the number : ");
    scanf("%d",&z);
    print_divisor(z);
    return 0;
}

