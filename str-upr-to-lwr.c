#include <stdio.h>
#include<string.h>

int main()
{
    char str[]={"CHinTu"};

   // int l= sizeof(a);
    int l=strlen(str);
    printf("%d\n",l);

    for (int i=0; i<l; i++)
    {
        if(str[i]>=65 && str[i]<=90)
        {
            str[i]=str[i]+32;
        }
    }

    printf("%s\n", str);


    for (int i=0; i<l; i++)
    {
        if(str[i]>=90 && str[i]<=122)
        {
            str[i]=str[i]-32;
        }
    }

    printf("%s\n", str);
}