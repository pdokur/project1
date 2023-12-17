#include <stdio.h>
#include <string.h>

int main()
{
    char a[] = "hel3lo HII 1sdSSs 848758 jj 618 l";
    int j = 0, n = strlen(a);
    printf("%s\n", a);

    for (int i = 0; i < n; i++)
    {
        if (a[i] >= 'A' && a[i] <= 'Z')
        {
            a[i] = a[i] + 32;
        }
        else if (a[i] >= 'a' && a[i] <= 'z')
        {
            a[i] = a[i] - 32;
        }
        else if (a[i] != ' ')
        {
            for (j = i; j < n - 1; j++)
            {
                a[j] = a[j + 1];
            }
            a[j] = '\0';
            n--;
            i--;
        }
    }
    printf("%s %D\n", a,j);

    return 0;
}
