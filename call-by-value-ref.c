#include <stdio.h>

int add(int , int );
int sum(int *, int *);

int a=10,b=2,sumu=0;

int main()
{
    add(2,b);
    printf("%d  ,%d\n",a,b);
    sum(&a,&b);
    printf("%d  ,%d\n",a,b);
}

int add(int x, int y)
{
    x=5;
    y=11;
    printf("%d ,%d\n",x,y);
}

int sum(int *x, int *y)
{
    *x=5;
    *y=11;
    printf("%d ,%d\n",*x,*y);
}