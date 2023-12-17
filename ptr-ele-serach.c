#include <stdio.h>

int main()
{
    int a[]={2,43,56,89,77,56,90};
    int size=sizeof(a)/sizeof(a[0]);
    int *aptr=a;
    int flag=0, tosearch =56;

    for (int i=0; i<size; i++)
    {
        if(*(aptr+i) == tosearch)
        {
            printf("Element %d found in %d index:\n", tosearch, i);
            flag++;
        }
    }
    if (flag==0)
    printf("Element %d not found in any index:\n", tosearch);

}