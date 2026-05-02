#include<stdio.h>
int main()
{
    int num[]={10,2,30,15,28,5};
    int value,pos;
    printf("Enter the value you want to search: ");
    scanf("%d",&value);
    int position = -1;
    for(int i=0;i<6;i++)
    {
        if(value == num[i])
        {
            pos=i+1;
            break;
        }
    }
    if(pos==-1)
    {
        printf("Item is not found");
    }
    else{
        printf("The value is found at %d position",pos);
    }
}
