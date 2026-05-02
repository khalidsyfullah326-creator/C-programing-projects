#include<stdio.h>
int main()
{
    char id[11];         // Variable to store employee ID (up to 10 characters)
    int hour;            // Variable to store working hours
    double value, salary; // Variables for hourly salary and total salary
    printf("Input the Employees ID(Max. 10 chars): ");
    scanf("%s",&id);
    printf("\nInput the working hours: ");
    scanf("%d",&hour);
    printf("\nInput salary amount/hour");
    scanf("%d",&value);
    salary=value*hour;
    printf("\nEmployee ID = %s\nSalary =BDT %d", id, salary);
    return 0;


}
