#include<stdio.h>

int main()
{
    int a[]={10, 12, 20, 25, 13, 10, 9, 40, 60, 5};
    int size= sizeof(a)/sizeof(a[0]);
    int pos, index, element;

    printf("select the element to check the position \n");
    for(int i =0; i<size; i++)
    {
        printf("%d\t", a[i]);
    }
    printf("\n");
     printf("Enter the element to check the position and Index \n");
     scanf("%d", &element);
     int flag=0;
     for (int i=0; i<size; i++)
     {
        if(a[i]==element)
        {
            pos=i+1;
            index=i;
            flag++;
        }
     }
        if(flag==0)
        {
            printf("Element not found\n");
        }
        else
        {
        printf("Element %d is position at %d and index is %d\n", element, pos, index );
        }

}