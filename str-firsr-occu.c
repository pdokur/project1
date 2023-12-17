#include <stdio.h>
#include <string.h>

int main()
{
    char str[]="qwertyuiopasdfghjklzxcvbnm";
    int len;
    char ch=0;
    len=strlen(str);

    printf("enter the character to search in a string :\n" );
    scanf("%c", &ch);

    for(int i=0; i<len; i++)
    {
        if(str[i]==ch){
            printf("'%c' is found at index %d\n", ch,i);
            break;
        }
    }
}