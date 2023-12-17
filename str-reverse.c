#include <stdio.h>
#include <string.h>

int main()
{
    char str[]="praveen";

    int len,i,j;
    char rev;
    len=strlen(str);

    for (i=0, j=len ;i<j; i++, j--)
    {
        rev=str[i];
        str[i]=str[j-1];
        str[j-1]=rev;
    }
    printf("\n%s\n", str);
}