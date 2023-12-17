#include <stdio.h>
/*
int Lbitshift(a, shift);
int Rbitshift(a, shift);

int main()
{
     int a=16, shift=2;

    printf("Bits before shift %d\n",a);

    int Lshift= Lbitshift(a, shift);
    int Rshift= Rbitshift(a, shift);

    printf("Bits After Left shift %x\n",Lbitshift);
    printf("Bits Right shift %d\n",Rbitshift);
}

int Lbitshift(int a, int shift)
{
   // if(shift==0)
    //return 0;

    //int higher_bit=a<<shift;
    //int lower_bit=a>>((sizeof(unsigned int)*8)-shift);

    return (a << shift) | (a >> (32 - shift));
}
int Rbitshift(int a, int shift)
{
   // if(shift==0)
   // return 0;

    int higher_bit=a>>shift;
    int lower_bit=a<<((sizeof( int)*8)-shift);

    return higher_bit | lower_bit;
}
*/

unsigned int circularLeftShift(unsigned int num, unsigned int shift) {
    shift %= sizeof(unsigned int) * 8;  // Ensure shift is within the range of the number of bits

    if (shift == 0)
        return num;

    unsigned int highBits = num >> shift;
    unsigned int lowBits = num << (sizeof(unsigned int) * 8 - shift);

    return highBits | lowBits;
}
unsigned int circularRightShift(unsigned int num, unsigned int shift) {
    shift %= sizeof(unsigned int) * 8;  // Ensure shift is within the range of the number of bits

    if (shift == 0)
        return num;

    unsigned int highBits = num << shift;
    unsigned int lowBits = num >> (sizeof(unsigned int) * 8 - shift);

    return highBits | lowBits;
}
int main() {
    unsigned int number =16;  // Example number: 170 in decimal
    int shift_pos=2;
    unsigned int LshiftedNumber = circularLeftShift(number, shift_pos);
    unsigned int RshiftedNumber = circularRightShift(number, shift_pos);

    printf("Original Number: %d\n", number);
    printf("Shifted Number: left %d \nRight %d\n", LshiftedNumber,RshiftedNumber);

    return 0;
}
