#include <stdio.h>

int main()
{
    int a[5];
    int size = sizeof(a)/sizeof(a[2]);
    printf("%d\n", size);

    int * ptr=a;
    printf("%p\n", &a);

    printf("%p\n", ptr);

    printf("Enter the array elements\n");
    for (int i=0; i<size; i++)
    {
        scanf("%d", &ptr[i]);
        //ptr=ptr+1;
    }

    ptr=a;
    
    printf("These are the array elements\n");
    for (int i=0; i<size; i++)
    {
        printf("%d\t", i[ptr]);
        //ptr=ptr+1;
    }


}