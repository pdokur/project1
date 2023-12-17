#include <stdio.h>
#include <string.h>

int main()
{
    char a[]="hello";

    int size=0;
     printf("%d\n",size);

    for (int i=0; a[i]!='\0'; i++)
    {
        size++;
    }
    printf("%d\n",size);
    for(int i=size-1; i>=0;i--)
    {
         printf("%c",a[i]);
    }
    printf("\n");

     printf("%d\n",strlen(a));
}