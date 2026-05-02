#include <stdio.h>
int main()
{
    int total_days, years, weeks, days;
    printf("Enter number of days ");
    scanf("%d",&total_days);
    years=total_days/365;
    weeks=total_days%365/7;
    days=total_days%365%7;
    printf("Years: %d\n",years);
    printf("Weeks: %d\n",weeks);
    printf("Days: %d\n",days);
    return 0;
}
