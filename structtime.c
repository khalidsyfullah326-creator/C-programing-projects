#include<stdio.h>
struct time_struct
{
    int hours;
    int minutes;
    int seconds;
};
int main()
{
    struct time_struct t;
    t.hours = 16;
    t.minutes = 40;
    t.seconds =54;
    printf("Time: %2d:%2d:%2d\n",t.hours,t.minutes,t.seconds);
    return 0;
}
