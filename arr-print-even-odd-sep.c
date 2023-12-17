#include<stdio.h>

int main()
{
    int a[]={ 0,1,2,3,4,5,6,7,8,9};
    int size= sizeof(a)/sizeof(a[0]);

    int even[size];
    int odd[size];

    for (int i=0; i<size; i++)
    {
        printf("%d\n", a[i]);
    }
 int oddcount=0, evencount=0;
    for (int i=0; i<size; i++)
    { 
        
        if(a[i]%2==0)
        {
            even[evencount]=a[i];
            evencount++;
        }
        else
        {
            odd[oddcount]=a[i];
            oddcount++;
        }
    }
printf("\nprinting eeven \n");
    for (int i=0; i<5; i++)
    {
        printf("%d\n", even[i]);
    }
    printf("\nprinting oddd\n");
        for (int i=0; i<5; i++)
    {
        printf("%d\n", odd[i]);
    }
}