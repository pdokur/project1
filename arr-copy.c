#include<stdio.h>

int main()
{
    int a1[]={1,3,5,7,9,44,66,78,32};
    int a1_size=sizeof(a1)/sizeof(a1[1]);
    int a2[a1_size];

    for (int i=0; i<a1_size; i++)
    {
        a2[i]=a1[i];
    }

    printf("The array 1 elements:\n");

    for (int i=0; i<a1_size; i++)
    {
        printf("%d\n",a1[i]);
    }

    printf("The array 2 elements:\n");

    for (int i=0; i<a1_size; i++)
    {
        printf("%d\n",a2[i]);
    }

    return 0;

}