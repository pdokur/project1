#include <stdio.h>
#include <string.h>

int main()
{
    char str1[20]="Praveen";
    char str2[10]="Reddy";
    int len1,len2,i,j;
    len1=strlen(str1);
    len2=strlen(str1);

    printf("%s\n %s\n", str1,str2 );

    for ( i=len1, j=0; str2[j]!='\0'; i++,j++)
    {
        str1[i]=str2[j];
    }
    str1[i]=str2[j];
    printf("%s\n %s\n", str1,str2 );
}