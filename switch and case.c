#include<stdio.h>
int main()
{
    int mark;
    char grade;
    printf("Enter the mark: ");
    scanf("%d",&mark);
    if(mark>80){
        grade = 'A';
    }
    else if(mark>70){
        grade = 'B';
    }
    else if(mark>40){
        grade = 'C';
    }
    else if(mark<40){
        grade = 'F';
    }
    switch(grade)
    {
    case 'A' :
        printf("You did great");
        break;
    case 'B' :
        printf("You did alright");
        break;
    case 'C' :
        printf("you did poorly");
        break;
    case 'F' :
        printf("You failed");
        break;
    default :
        printf("Invalid grade");

    }
    return 0;
}
