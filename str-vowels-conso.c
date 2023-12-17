#include <stdio.h>
#include <string.h>

int main()
{
    char str[]="rOyAl eNfiElDu5454i";
    int len,i,j, vowels=0, consonants=0;
    len = strlen(str);

    printf("\n%s\nlen %d\n", str,len);

    for (i=0; i<len; i++)
    {
        if((str[i]>=65 && str[i]<=90) || (str[i]>=97 && str[i]<=122))
        {
        if(str[i]=='a' || str[i]=='e' || str[i]=='i' || str[i]=='o' || str[i]=='u' ||
         str[i]=='A' || str[i]=='E' || str[i]=='I' || str[i]=='O' || str[i]=='U')
        {
            vowels++;
        }
        else
        consonants++;
        }
    }
    printf("Vowels:%d\t Consosnants: %d\n", vowels, consonants );
    

}