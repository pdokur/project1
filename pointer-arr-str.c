#include <stdio.h>
#include <string.h>
int main() {

    int *a[]={93,2,3,5,6,7,9};
    int size=sizeof(a[0]);
    printf("%d\n ",size);
    //int asize=sizeof(a)/sizeof(a[0]);


    /*
    for(int i=0;i<size; i++)
    {
        printf("\n%d\n",a[i]);
    }
        for(int i=0;i<size; i++)
    {
        printf("\n%p\n",*(a+i));
    }
        for(int i=0;i<size; i++)
    {
        printf("\n%d \n",*(a+i));
    }
        for(int i=0;i<size; i++)
    {
        printf("\n%p\n",a[i]);
    }
    /* Write C code here
    char *a="hi hello..";
    int size=sizeof(a);
    int n=strlen(a);
    char temp='c';
    a+1=&temp;
    printf("%d\n %d\n %s\n",size,n, a);
    */
    return 0;
}