#include <stdio.h>

int main()
{
    int a[]={5,3,8,211,9,11,21,7};
    int *s,i,small,n;
    n=sizeof(a)/sizeof(a[0]);

    s=a;
    small=*s;

    for(i=0;i<n;i++)
    {
        if(*s<small)
        small=*s;
        s++;
    }
    printf("%d\n",small);

}