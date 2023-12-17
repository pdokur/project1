#include<stdio.h>
#include<limits.h>    // this is used to assign the range of datatypes in this program

int main()
{
   // int a[]={5,72,3,55,7,92,2,80,99,22,333,32};
    int a[]={3,5,11,7,9,6,1,99,11,99,999};

    int max1, max2;
    max1=max2=INT_MIN;

    printf("%d\n %d\n",INT_MAX, INT_MIN);   //Max= 2147483647 and Min= -2147483648

    int size=sizeof(a)/sizeof(a[1]);

    for(int i=0; i<size; i++)
    {
        if(a[i]>max1)  //5>(-2147483648)
        {
            max2=max1;
            max1=a[i];
        }
        else if (a[i]> max2 && a[i]<max1) //5>(-2147483648)  && 5<(-2147483648)
        {
            max2=a[i];
        }
        
}
        printf("max 1 value is = %d\n max 2 value is = %d\n", max1, max2);

        return 0;
    
}