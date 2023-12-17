// Online C compiler to run C program online
#include <stdio.h>
 int sum1(int, int);
 int sum2(int*, int*);

int main() {
  
  int a=10, b=20;
  int sums=0;
  printf("before : a=%d, b=%d\n",a,b);
  sums=sum1(a,b);
  printf("After1: a=%d, b=%d, sum: %d\n",a,b,sums);
  sums=sum2(&a,&b);
  printf("After2: a=%d, b=%d, sum: %d\n",a,b,sums);
  
    return 0;
}

int sum1(int x, int y)
{
   // int a, int b;
    int c=x+y;
    return c;
}
int sum2(int* x, int* y)
{
   // int a, int b;
   *x=33;
   *y=221;
    int c=*x+*y;
    return c;
}