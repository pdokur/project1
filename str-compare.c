#include <stdio.h>
#include <string.h>

int main()
{
    char str1[]='r';
    char str2='P';
    int len1, len2, count,i=0,j=0;
    //len1=strlen(str1);
    //len2=strlen(str2);
/*
    for (i=0; str1[i]!='\0' || str2[i]!='\0'; i++)
    {
        if(str1[i]!=str2[i])
        {
            j++;
            count=str1[i]-str2[i];
            break;

        }
    }
    if(j==0)
    printf("strings are equal %d\n",count);
    else
    printf("strings are not equal %d\n", count);
*/

printf("%c\n, %c\n",str1,str2);
}