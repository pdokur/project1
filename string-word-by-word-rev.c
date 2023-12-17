#include <stdio.h>
#include <string.h>

int main()
{
    char a[]={"Hi Hello welocme to the world man"};
    int size = strlen(a);
    printf("%d\n", size);

    for (int i=size; i>0; i--)
    {
        if(a[i]==' ')
        {
        a[i]='\0';
        printf("%s \n", &a[i]+1);
        }
    }
    printf("%s ", a);
	return 0;
}

/*
int main()
{
    char string[]="Sandhya and sandy are friands....";
    int len=strlen(string);
    
    for (int i=len-1;  i>=0; i--)
    {
        if(string[i]==' ')
        {
            // string[i]=NULL;
            printf("%s\n",string+i);
            string[i]=NULL;
        }
    }
    printf("%s\n",string);
    
    return 0;
}
*/