#include <stdio.h>
int main() 
{
    char ch,word[10],sen[20];
    
    scanf("%c", &ch);
    scanf("%s\n", &word);
    scanf("%[^\n]", &sen);
    
    printf("%c\n", ch);
    printf("%s\n", word);
    printf("%s\n", sen);
}
