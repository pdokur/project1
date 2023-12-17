// Online C compiler to run C program online
#include <stdio.h>

/* declaration of function */
void func(void);

/* a global variable */
static int count = 10;

int main() {

while(count--) {
func(); /* increment of function */
}

return 0;
}

void func( void ) {

/* definition of function */
static int x = 100; /* a local type of static variable */
x++;
printf("x is %d and the count is %d\n", x, count);
}