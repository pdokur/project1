#include<stdio.h>


int main()
{
int a[]={-1,-10,100,5,61,-2,-23,8,-90,51};

int size=sizeof(a)/sizeof(a[1]);

for (int i=0; i<size; i++)
{
    if (a[i]<0)
    printf("%d\n",a[i]);
}

return 0;
}