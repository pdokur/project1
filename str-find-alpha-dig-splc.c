#include <stdio.h>
#include <string.h>

int main()
{
    char str[]="rOyAl eNfiElD @ 1 23";
    int len,i,j, alphabets=0, digits=0, splc=0;
    len = strlen(str);

    printf("\n%s\n", str);

    for (i=0; i<len; i++)
    {
        if((str[i]>=65 && str[i]<=90) || (str[i]>=97 && str[i]<=122))
        {
            alphabets++;
        }
        else if((str[i]>=48 && str[i]<=57) )
        {
            digits++;
        }
        else
        splc++;
    }

    printf("\n%s\n", str);
    printf("Alphabtes:%d\t Digits: %d\t Special Characters: %d\n", alphabets, digits, splc );
    

}