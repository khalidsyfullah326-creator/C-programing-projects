#include <stdio.h>
int main()
{
    int sum,average;
    int number[5];
    printf("Enter five numbers: ");
    for(int i=0;i<5;i++)
    {
     scanf("%d",&number);
    }
    sum = 0;
    for(int i=0;i<5;i++)
    {
        sum = sum + number[i];
    }
    printf("The sum of those numbers is %d\n",sum);
    average = sum/5;
    printf("The average of those numbers is %d\n",average);
}
