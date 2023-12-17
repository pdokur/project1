#include<stdio.h>

int main()
{
    int a[]={22,34,78,99,12,23,333};
    int input, pos=0;
    int size=sizeof(a)/sizeof(a[0]);

    printf("These are the array elements\n");
    for(int i=0; i<size; i++)
    {
        printf("%d\t", a[i]);
    }
 
    printf("\nEnter the value to Insert\n");
    scanf("%d",&input);
    printf("Enter the position to Insert\n");
    scanf("%d",&pos);

    for(int i=size; i>=pos; i--)
    {
        a[i]=a[i-1];
    }
   
    a[pos-1]=input;
    size++;

    printf("These are the array elements\n");
    for(int i=0; i<size; i++)
    {
        printf("%d\t", a[i]);
    }

}