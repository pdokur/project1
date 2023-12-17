#include<stdio.h>

int main()
{
    int a[]={1,2,3,4, 5};
    int size= sizeof(a)/sizeof(a[0]);

    int t3=1, temp=0;

    for (int i=0; i<t3; i++)
    {
          temp=a[0];
        for(int j=0; j<size; j++)
        {
                a[j]=a[j+1];  
        }
        a[size-1]=temp;
    }

    for (int i =0; i<size; i++)
    {
        printf("%d\n", a[i]);
    }
}