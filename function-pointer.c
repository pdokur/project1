#include <stdio.h>

/*
int add(int x, int y)
{
    return x+y;
}
int sub(int x, int y)
{
    return x-y;
}
int multi(int *x, int *y)
{
    return *x**y;
}

int main()
{
    int (*func_ptr[])(int *,int*)={add,sub,multi};
    int ch, a=11,b=212;

    printf("Enter choice: 0 for add, 1 for Sub and 2 for Multi\n");
    scanf("%d",&ch);

    if(ch>2||ch<0)
    {
    printf("invalid request\n");
    return 0;
    }
    int c=(*func_ptr[ch])(&a,&b);
    printf("The value is : %d\n", c);
    
}



float fun(float a)
{

    int b=22, sum;
    sum=a+b;
    return sum;
}

int main()
{
    float a=101.129;
    float (*func_ptr)(float)=&fun;
    //func_ptr=&fun;
    float d=(*func_ptr)(a);
    printf("sum value is : %f\n",d);

}
*/
float fun(float *a)
{
    printf("%f",*a);
}

int main()
{
    //float a[]={101.129,11.2};
    float a=11.1;
    fun(&a);
    //float (*func_ptr)(float [])=&fun;
    //func_ptr=&fun;
    //float d=(*func_ptr)(a);
    //printf("sum value is : %f\n",d);

}