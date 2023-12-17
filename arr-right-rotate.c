#include<stdio.h>

int main()
{
    int a[]={1,2,3,4, 5};
    int size= sizeof(a)/sizeof(a[0]);

    int t3=3, temp=0;

    for (int i=0; i<t3; i++)
    {
          temp=a[size-1];
        for(int j=size; j>0; j--)
        {
                a[j]=a[j-1];  
        }
        a[0]=temp;
    }

    for (int i =0; i<size; i++)
    {
        printf("%d\n", a[i]);
    }
}