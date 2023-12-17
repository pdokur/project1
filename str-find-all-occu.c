#include <stdio.h>
#include <string.h>

int main()
{
    char str[]="qwertyuiopasdfghjklzxcvbnmpraveenreddy";
    int len,i,temp=0;
    char ch=0;
    len=strlen(str);

    printf("length of string is : %d\n", len);

    printf("\nenter the character to search in a string :\n" );
    scanf("%c", &ch);

    printf("'%c' is found at all following indexes: ",ch);

    for( i=0; i<len; i++)
    {
        if(str[i]==ch){
            printf("'%d' ",i);
        }
    }
   
}


