#include<stdio.h>
//#include "extern_test.c" // variables.c
// declaring and defining a variable
float extern_var;
 int add()
{
    int a=5,b=110,c=a+b;
    int flag=0;
    printf("sum %d\n",c);
}

static void function()
{
 float extern_var = 188.0;
 printf("variable.c file %f\n",extern_var);
}
void normal()
{
    function();
    add();
}

/*
void display()
{
    extern int x;
    printf("hello from varable.c file\n");
    printf("x = %d\n",x);
}

*/
