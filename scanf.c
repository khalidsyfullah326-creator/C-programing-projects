#include <stdio.h>
int main()
{
    int a;
    printf("Enter the value of integer ");
    scanf("%d",&a);
    int area =a*a;
    printf("%d\n",area);
    char name[20];
    printf("Enther the name ");
    fgets(name, 20, stdin);
    return 0;
}
