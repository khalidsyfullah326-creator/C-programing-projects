#include <stdio.h>
int main() {
    int sec, h, m, s; // Declare variables for seconds, hours, minutes, and seconds

    printf("Input seconds: ");
    scanf("%d", &sec);
    h=(sec/3600);
    m=(sec%3600)*60;

