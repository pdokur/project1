#include <stdio.h>
#include <string.h>
/*
int stringLength(const char* str) {
    int length = 0;
    while (str[length] != '\0') {
        length++;
    }
    return length;
}

void findSubstrings(const char* string, const char* substring) {
    int stringLen = stringLength(string);
    int subLen = stringLength(substring);
    int i, j;

    printf("original string lenght is %d\n", stringLen);
    printf("Sub string lenght is %d\n",subLen);


    for (i = 0; i <= stringLen - subLen; i++) {
        int match = 1;
        for (j = 0; j < subLen; j++) {
            if (string[i + j] != substring[j]) {
                match = 0;
                break;
            }
        }

        if (match) {
            printf("Substring '%s' found at index %d\n", substring, i);
        }
    }
}

int main() {
    char string[] = "Sandhya and sandy are friands...and";
    char substring[] = "and";

    findSubstrings(string, substring);

    return 0;
}*/

int main()
{
    char string[]="Sandhya and sandy are friands....";
    char sub_str[]="and";
    int string_len=strlen(string);
    int sub_len=strlen(sub_str);

    for(int i=0; i<=string_len-sub_len; i++)
    {
        int match=1;
        for(int j=0; j<sub_len; j++)
        {
            if(string[i+j]!=sub_str[j])
            {
                match=0;
                break;
            }
        }

        if(match)
        printf("Substring '%s' found at index %d\n",sub_str, i);
    }



}
