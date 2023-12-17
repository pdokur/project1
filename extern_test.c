// main.c
#include <stdio.h>
//#include "variables.c"


// making the variable, an extern variable
// float extern_var;
extern void normal();
static int add()
{
    int a=5,b=10,c=a+b;
    printf("sum %d\n",c);
}
int  main()   // gcc extern_test.c variables.c -o obj_file  //you have to run two source files and make one object file.
{
   normal();
   add();
  extern float extern_var;
    // print the variable from another file
    printf("Testing file %f\n", extern_var);
    return 0;
}

/*
int x=10;
extern void display();
void main()
{
  display();
}
*/