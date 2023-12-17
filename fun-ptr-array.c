#include <stdio.h>

int *fun (int [], int);

int main()
{
    int a[]={1,3,5,7};
    int size=sizeof(a)/sizeof(a[0]);
 
 printf("%d\n",fun (a, size));
}

int *fun(int a[], int size)
{
    int sum=0;
    for (int i=0; i<size; i++)
    {
        printf("%d\n",a[i]);
        sum+=a[i];
    }
    return sum;
}