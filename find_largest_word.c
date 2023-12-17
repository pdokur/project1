#include <stdio.h>
#include <string.h>
int main()
{
    char a[]="hi hello worldsssas";
    char largestword[50];
    char currentword[50];
    int larword_len=0;
    int curword_len=0;

    for(int i=0; i<=strlen(a); i++)  //for(int i=0; i<strlen(a); i++) // have to check this 
    {
        if(a[i]==' ' || a[i]=='\0')
        {
            if(curword_len>larword_len)
            {
                larword_len=curword_len;
                strcpy(largestword,currentword);
            }
        currentword[0]='\0';
        curword_len=0;
        }
        else
        {
            strncat(currentword,&a[i],1);  // strncat(destination, source, 3); // Append the first 3 characters of source
            curword_len++;
        }
    }
    printf("largest word : %s\n",largestword);

    return 0;
}

/*
#include <stdio.h>
#include <string.h>

int main() {
    char a[] = "hi hello worldsss";
    printf("Input String: %s\n", a);

    char largestWord[50]; // Assuming the largest word won't exceed 50 characters
    int largestWordLength = 0;
    char *token = strtok(a, " "); // Tokenize the input string by space

    while (token != NULL) {
        int currentWordLength = strlen(token);
        if (currentWordLength > largestWordLength) {
            largestWordLength = currentWordLength;
            strcpy(largestWord, token);
        }
        token = strtok(NULL, " "); // Get the next word
    }

    printf("Largest Word: %s\n", largestWord);

    return 0;
}

*/