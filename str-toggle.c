#include <stdio.h>
#include <string.h>

int main()
{
    char str[]="rOyAl eNfiElD";
    int len,i,j;
    len = strlen(str);

    printf("\n%s\n", str);

    for (i=0; i<len; i++)
    {
        if(str[i]>=65 && str[i]<=90)
        {
            str[i]=str[i]+32;
        }
        else if(str[i]>=90 && str[i]<=122)
        {
            str[i]=str[i]-32;
        }
    }

    printf("\n%s\n", str);

}