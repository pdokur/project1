#include <stdio.h>
/*
int main() {
    // Write C code here
    
    int a=10, pos=2;
    int mask= 1<<2;
    if(a&mask)
    printf("bit is set\n");
    else
    printf("bit is not set\n");

    return 0;
}*/

int main() {
    // Write C code here
    
    int a=10, pos=2;
    int mask= 1<<2;
    
    printf("bit is %d before set\n",a);
    a=(a|mask);
    printf("bit is %d after set\n",a);
   
    a=(a^mask);
    
    printf("bit is %d clear set\n",a);
    mask= 1<<1;

    a=(a&mask);
    printf("bit is %d unset\n",a);
    mask=1<<3;
    a=(a^mask); 
    printf("bit is %d clear set\n",a);
    a=~a;
    printf("bit is %d toggle set\n",a);

    return 0;
}
