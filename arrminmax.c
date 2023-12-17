#include<stdio.h>


int main()
{

    int a[]={110, 501, 12, 16, 2,1,77777};
    int min, max;
    int size= sizeof(a)/sizeof(a[1]);
    min=a[0];
    max=a[0];

    for (int i=1; i<size; i++)
    {
        if(max<a[i])
        {
            max=a[i];
        }
        if (min>a[i])
        {
            min=a[i];
        }
    }
    printf("minimun value is :%d\nmaximun value is : %d\n",min,max);
}
