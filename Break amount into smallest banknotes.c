#include<stdio.h>
int main()
{
    int amount, note, note1, note2, note3, note4, note5, note6;
    printf("Enter the total amount: ");
    scanf("%d",&amount);
    note =amount/100;
    printf("%d Notes of 100\n",note);
    note1 =(amount%100)/50;
    printf("%d notes of 50\n",note1);
    note2 =(((amount%100)%50)/20);
    printf("%d Notes of 20\n",note2);
    note3 =((((amount%100)%50)%20)/10);
    printf("%d Notes of 10\n",note3);
    note4 =(((((amount%100)%50)%20)%10)/5);
    printf("%d Notes of 5\n",note4);
    note5 =((((((amount%100)%50)%20)%10)%5/2));
    printf("%d Notes of 2\n",note5);
    note6 =(((((((amount%100)%50)%20)%10)%5)%2));
    printf("%d Notes of 1\n",note6);
    return 0;





}
