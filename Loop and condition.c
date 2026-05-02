#include<stdio.h>
int main()
{
    int n,i;
    while(1){
        printf("Enter the value of n [Input -1 to stop]: \n");
        scanf("%d",&n);
        if(n==-1)
            break;
        if(n>-32){
            for(i=n;i>=-32;i--)
                printf("%d",i);
        }
        else{
            for(i=n;i<=-32;i++){
                printf("%d",i);
        }
        }
        return 0;
    }

}
