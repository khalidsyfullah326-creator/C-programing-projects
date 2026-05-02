#include <stdio.h>
int main()
{
    int row, col, value, n, k;
    printf("Enter the number of Row: ");
    scanf("%d",&n);
    for(row=1; row<=n; row++)
    {
     for(col=1; col<=n-row; col++){
     printf(" ");
    }
    value=1;
    for(k=1; k<=row; k++){
        printf("%d ",value);
        value = value*(row-k)/k;
    }
    printf("\n");

}

}
