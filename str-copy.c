#include <stdio.h>

int main()
{
    char dst[]="praveen";
    char src[12]="";
    int i;
printf("%s\n", src);
    for ( i=0; dst[i] != '\0'; i++)
    {
        src[i]=dst[i];
    }
    //printf("%d",i);
        src[i]='\0';

    printf("%s\n", src);
}