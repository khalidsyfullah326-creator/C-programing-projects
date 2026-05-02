
#include<stdio.h>
void square(int a)
{
    printf("The square of the number is %d\n",a*a);
}
int square_root(int b)
{
    int result = sqrt(b);
    return result;
}
int main()
{
int a;
printf("Enter the integer number a : ");
scanf("%d",&a);
square(a);
int b;
printf("Enter the integer number b : ");
scanf("%d",&b);
int squareroot = square_root(b);
printf("The square root of the number is %d",squareroot);
}
