#include <stdio.h>
#include <string.h>

int main()
{
    char str[]="Praveen d a";
    int len, i,count=1;
    char prevChar;

    len=strlen(str);

    for (i=0; i<len-1; i++)
    {
        //prevChar=str[i];
        if(str[i]==' '|| str[i]=='\t'|| str[i]=='\n' || str[i]=='\0' )
        {
            if(prevChar != ' ' && prevChar != '\n' && prevChar != '\t' && prevChar != '\0')
            {
                count++;
            }
        }
        prevChar=str[i];
    }

    printf("String contains %d words \n", count);
}