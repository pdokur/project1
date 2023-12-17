#include <stdio.h>
#include <string.h>
#include <limits.h>
#define MAX_SIZE 70  // Maximum string size
#define MAX_CHARS 255 // Maximum characters allowed

int main()
{
    char str[MAX_SIZE]="praveeeddecbeeeeeeyddddd";
    int len,i,min=0, max=0, temp=1;
    char ch=0;
    len=strlen(str);
    int freq[MAX_SIZE];

    printf("/n length is %d\n", len);

    for( i=0; i<len; i++)
    {
        freq[i]=-1;
    }

    for( i=0; i<len; i++)
    {
        if(freq[i]==-1)
            {
        for(int j=i+1; j<=len; j++)
        {
            if(str[i]==str[j])
            {
                freq[j]=0;
                temp++;
            }
            freq[i]=temp;
        }          
        }
          temp=1;
    }

       for( i=0; i<len; i++)
    {
        printf("%d\n",freq[i]);
    }
      max=freq[i];
    for (int i=0; i<len; i++)
    {
      for (int j=i+1; j<len; j++)
    {
      if(max<freq[j])
      {
        max=freq[j];
      }
    }
    }  
    
    for( i=0; i<len; i++)
    {
      if(freq[i]==max)
        printf("%c is the repetative in given string and occured %d times\n ",str[i], max);
    }
}