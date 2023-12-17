#include <stdio.h>

void binary(unsigned int n)
{
	unsigned int mask = 0x80000000;
    while(mask) {
	  printf("%d", (n&mask)?1:0);
	  mask = mask >> 1;
	}
}

void main()
{
    unsigned int num = 0;
	int pos = 0;
	
    printf("Enter an integer: ");
    scanf("%d", &num);

    printf("Binary represntation of the input number:\n");
    binary(num);
    
    printf("\nEnter a bit position to toggle (0-31): ");
    scanf("%d", &pos);
    
    num = num ^ (0x01 << pos);
    
    printf("\n\nAfter toggling %d-th bit of the number:\n", pos);
    binary(num);
    printf("\n");
}