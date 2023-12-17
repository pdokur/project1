#include<stdio.h>
#include<limits.h>

int main()
{
    int a[]={55,71,92,23,80,1,99,222,333,32};

    int min1, min2;
    min1=min2=INT_MAX;

    int size=sizeof(a)/sizeof(a[1]);

    for(int i=0; i<size; i++)
    {
        if(a[i]<min1) //5<(2147483647) 
        {
            min2=min1;
            min1=a[i];
        }
        else if (a[i]< min2 && a[i]>min1)//5<(2147483647)  && 5>(2147483647)
        {
            min2=min1;
        }
}
        printf("min 1 value is = %d\n min 2 value is = %d\n", min1, min2);

        return 0;
    
}