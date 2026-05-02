#include <stdio.h>
void even_or_odd(int x){
   if(x%2 ==0){
    printf("EVEN\n");
   }
   else{
    printf("ODD\n");
   }
}
int main(){
    int i;
   printf("Enter the number : ");
   scanf("%d",&i);
   even_or_odd(i);
   return 0;
}
