#include <stdio.h>

int main() {
    
    const char msg[] = "Hello, World!";
    int num = 42;
    float pi = 3;
    
    const char * p1;               // Pointer to a constant character
    char const * p2;               // Equivalent to the previous declaration
    char * const p3;               // Constant pointer to a character
    const char * const p4;         // Constant pointer to a constant character
    char const * const p5;         // Equivalent to the previous declaration
    int const * p6;                // Pointer to a constant integer
    const int * p7;                // Equivalent to the previous declaration
    int * const p8;                // Constant pointer to an integer
    int const * const p9;          // Constant pointer to a constant integer
    const int * const p10;         // Equivalent to the previous declaration
    const float * p11;             // Pointer to a constant float
    float const * p12;             // Equivalent to the previous declaration
    float * const p13;             // Constant pointer to a float
    const float * const p14;       // Constant pointer to a constant float
    float const * const p15;       // Equivalent to the previous declaration

    p1 = msg;
    p2 = msg;
    // Uncomment the following line to see the error:
    // p3 = msg;
    // Uncomment the following line to see the error:
    // p4 = msg;
    // Uncomment the following line to see the error:
    // p5 = msg;
    // Uncomment the following line to see the error:
    // p6 = &num;
    p7 = &num;
    //p8 = &num;
    // Uncomment the following line to see the error:
    // p9 = &num;
    // Uncomment the following line to see the error:
    // p10 = &num;
    // Uncomment the following line to see the error:
     p11 = &pi;
     p12 = &pi;
    // Uncomment the following line to see the error:
    // p13 = &pi;
    // Uncomment the following line to see the error:
    // p14 = &pi;
    // Uncomment the following line to see the error:
    // p15 = &pi;

    printf("p1: %s\n", p1);
    printf("p2: %s\n", p2);
    printf("p7: %d\n", *p7);
    printf("p8: %d\n", *p8);
    printf("p11: %f\n", *p11);
    printf("p12: %f\n", *p12);

    return 0;
}

/*
const char *p;

char const *p;

char * const p;

const char * const p;

char const * const p;

int const *p;

const int *p;

int * const p;

int const * const p;

const int * const p;

const float *p;

float const *p;

float * const p;

const float * const p;

float const * const p;
*/