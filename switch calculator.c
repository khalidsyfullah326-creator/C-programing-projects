#include <stdio.h>
int main()
{
    while(1){
double num1, num2;
char opar;
printf("Enter the operation +,-,*,/ :");
scanf("%s",&opar);
printf("Enter the two operands: ");
scanf("%lf %lf",&num1,&num2);
switch(opar){
 case '+':
     {
         printf("%lf + %lf = %lf\n",num1,num2,num1+num2);
         break;
     }
      case '-':
     {
         printf("%lf - %lf = %lf\n",num1,num2,num1-num2);
         break;
     }
      case '*':
     {
         printf("%lf * %lf = %lf\n",num1,num2,num1*num2);
         break;
     }
      case '/':
     {
         printf("%lf / %lf = %lf\n",num1,num2,num1/num2);
         break;
     }
}
    }
}
