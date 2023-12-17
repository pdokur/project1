#include <stdio.h>

ptr_modify(int p[])
{    
    int q=10;
    printf("%p  %p\n",*p,&q);
    *p=&q;
    //p=&q;
}

int main()
{
    int r=20;
    int *p=&r;
    printf("r=%p p=%p\n",&r,&p);
    ptr_modify(&p);
    printf("%d\n",*p);
    printf("%p\n",&p);
}