#include <stdio.h>

int main()
{
    int a[5];
    int b[5];
    int asize=sizeof(a)/sizeof(a[0]);
    int bsize=sizeof(b)/sizeof(b[0]);
    int * aptr=a;
    int * bptr=b;

    printf("Enter the elements in a array\n");
    for (int i=0; i<asize; i++)
    {
        scanf("%d", aptr+i);
    }
    printf("Copied the a array elements to b\n");
    for (int i=0; i<asize;i++)
    {
        bptr[i]=aptr[i];
    }
    printf("Cthese are b array elements\n");
    for (int i=0; i<asize; i++)
    {
        printf("%d\t", *(bptr+i));
    }
}