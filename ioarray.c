#include<stdio.h>

printDisplay(int a[], int start, int size);

int main()
{
    int a[5];
    int s=0;
    int size= sizeof(a)/sizeof(a[1]);

printf("Enter the %d elements\n",size);
    for (int i=0; i<size;i++)
    {
        scanf("%d", &a[i]);
      //  printf("%d",a[i]);
    }
    printDisplay(a, s, size);

}

int printDisplay(int aa[], int sa, int na)
{
    if (sa>=na)
    return;

    printf("%d element %d\n", sa+1, aa[sa]);

    printDisplay(aa, sa+1, na);

}