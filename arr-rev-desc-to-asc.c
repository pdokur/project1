#include<stdio.h>

int main()
{
    int a[]={10, 5, 16, 35, 500};

    int size=sizeof(a)/sizeof(a[0]);

    printf("printing the array in reverse order: \n" );
    for (int i=size-1; i>=0; i--)
    {
        printf("%d\n", a[i]);
    }

    for (int i=0; i<size; i++)
    {
        int temp=0;
        for(int j=i+1; j<size; j++)
        {
            if(a[i]<a[j])
            {
                temp=a[i];
                a[i]=a[j];
                a[j]=temp;
            }
        }
    }
    printf("printing the array in Des to Asc : \n" );
    for (int i=0; i<size; i++)
    {
        printf("%d\n", a[i]);
    }

}