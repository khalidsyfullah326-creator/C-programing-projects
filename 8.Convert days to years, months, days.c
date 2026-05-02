#include<stdio.h>
int main()
{
    int ndays,months,years,days;
    printf("Enter the number of days: ");
    scanf("%d",&ndays);
    years=ndays/365;
    months=(ndays%365)/30;
    days=(ndays%3650)%30;
    printf(" Years%d\n Months%d\n Days%d\n",years, months, days);
    return 0;
}
