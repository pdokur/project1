#include<stdio.h>

int main()
{
    int a[11]={22,34,78,99,12,23,333};
    int  pos=0;
    int size=sizeof(a)/sizeof(a[0]);


    printf("These are the array elements\n");
    for(int i=0; i<size; i++)
    {
        printf("%d\t", a[i]);
    }

    printf("\nEnter the position to delete\n");
    scanf("%d",&pos);

    for(int i=pos-1; i<=size; i++)
    {
        a[i]=a[i+1];
    }
   
    size--;

    printf("These are the array elements\n");
    for(int i=0; i<size; i++)
    {
        printf("%d\t", a[i]);
    }

}