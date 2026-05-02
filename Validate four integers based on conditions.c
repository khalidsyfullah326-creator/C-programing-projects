#include<stdio.h>
int main()
{
    int p, q, r, s;
    printf("\n input the first integer");
    scanf("%d",&p);
    printf("\n input the second integer");
    scanf("%d",&q);
    printf("\n input the third integer");
    scanf("%d",&r);
    printf("\n input the forth unteger");
    scanf("%d",&s);
    if((q > r) && (s > p) && ((r+s)>(p+q)) && (r>0) && (s > 0) && (p%2 ==0))
    {
        printf("\nCorrect values\n");

    }
    else{
        printf("\nwrong values\n");
    }
    return 0;
}
