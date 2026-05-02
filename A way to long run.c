#include <stdio.h>
#include <string.h>
int main()
{
    int t, length;
    char word[100];
    scanf("%d", &t);
    char c;
    scanf("%c",&c);
    while(t--){
        gets(word);
        length = strlen(word);
        if (length > 10){
            printf("%c%d%c\n", word[0], length - 2, word[length -1]);
        }
        else{
            printf("%s\n",word);
        }
    }
    return 0;
}
