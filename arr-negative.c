#include<stdio.h>

int main()
{
    int a[]={-1,2,-4,0,99,-89,-34,2,-2};

    int neg, size, count=0;
    size=sizeof(a)/sizeof(a[0]);

    printf("These are  the negative values :\n");

    for (int i=0; i<size; i++)
    {
        if(a[i]<0)
        {
            printf("%d\n", a[i]);
       
        count++;
         }
    }
    printf("count of the negative values :%d\n", count);
}