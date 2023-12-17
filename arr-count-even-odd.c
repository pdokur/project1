#include<stdio.h>

int main()
{
    int a[]={1,2,3,4,5,6,7,8,9,0,11,2,3};

    int size=sizeof(a)/sizeof(a[0]);
    int odd=0, even=0;

    for(int i=0; i<size; i++)
    {
        if(a[i]%2==0)
        even++;
        else
        odd++;
    }
    printf("even count is : %d\n odd count is : %d\n", even, odd);
}