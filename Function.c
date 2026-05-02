#include<stdio.h>
int get_sum(int x,int y){
    int sum = x + y;
    return sum;
}
void say_hi(){
printf("hi\n");
}
int main()
{
    printf("main starts\n");
    say_hi();
    int result = get_sum(10,20);
    printf("result = %d\n",result);
    return 0;
}


