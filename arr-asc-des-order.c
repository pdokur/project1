#include<stdio.h>

int main()

{
    int a[]={10, 12, 20, 25, 13, 10, 9, 40, 60, 5};
    int size= sizeof(a)/sizeof(a[0]);

    for (int i=0; i<size; i++)
    {
        printf("%d\n", a[i]);
    }
    int temp=0;

    for (int i=0; i<size; i++)
    {
        for(int j=i+1; j<size; j++)
        {
            if(a[i]>a[j])
            {
                temp=a[i];
                a[i]=a[j];
                a[j]=temp;
            }
        }
    }
    printf("\n Asc to des\n");
    for (int i=0; i<size; i++)
    {
        printf("%d\n", a[i]);
    }

}