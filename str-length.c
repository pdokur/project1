#include <stdio.h>

int main()
{
    char str[]="Praveen Kumar Reddy";
    int count=0;
    int i;

    for ( i=0; str[i]!='\0'; i++)
    {
        count++;
    }

    printf("length of the string is : %d\n", count);

}