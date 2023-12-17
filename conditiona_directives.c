/*

#if     --->    uses the value of Macro
#ifdef  --->    Returns True if this Macro is Defined
#ifndef --->    Returns True if this Macro is Defined
#elif   --->    Its equal to else and if
#else   --->    Executes if #if is false
#endif  --->    End of Pre-Processor conditional
#error  --->    Prints Error Message and Halts the Compilation

    .c file     //source code --> so preprocessor will check the all preprocessor directive code and it is validated the valid one and send to the intermediate file
*************
*  #if      *
*     ---   *
*     ---   *
*  #endif   *
*     ---   *   
*     ---   *
*  #else    *
*     ---   *
*     ---   *
*  #endif   *
*************
     ||
     ||
// any one will come into the intermediate file and that code goes to the compiler

   .i file
*************
*  #if      *
*     ---   *
*     ---   *
*  #endif   *
*     ---   *   
*     ---   *
*  #else    *
*     ---   *
*     ---   *
*  #endif   *
*************
     ||
     ||
     ||
     ||
   Compiler
*************
*  #if      *
*     ---   *
*     ---   *
*  #endif   *
*     ---   *   ===>
*     ---   *
*  #else    *
*     ---   *
*     ---   *
*  #endif   *
*************






#include <stdio.h>
#define heading

int main()
{
    #ifdef heading
    printf("\n Hi Hello...Welcome");
    #endif

    printf("\n");
}

#include <stdio.h>
#define myage 16

int main()
{
    #ifdef myage
    printf("%d",myage);
    #else
    printf("\n Hi welcome");
    #endif

    printf("\n");
}

#include <stdio.h>
#define RATE 15

int main()
{
    int p=10000,time=1, intrest;

    #if RATE == 10
    intrest = (p*time*RATE)/100;
    printf("Intrest Calculated at 10 Percent is: %d\n", intrest);

    #elif RATE == 12
    intrest = (p*time*RATE)/100;
    printf("Intrest Calculated at 12 Percent is: %d\n", intrest);

    #elif RATE == 15
    intrest = (p*time*RATE)/100;
    printf("Intrest Calculated at 15 Percent is: %d\n", intrest);

    #elif RATE == 18
    intrest = (p*time*RATE)/100;
    printf("Intrest Calculated at 18 Percent is: %d\n", intrest);

    #else
        #error "Please Provide Macro Value of RATE";   
    #endif

}



#include <stdio.h>
#define MSG "HEY"

#ifndef MSG
    #define MSG "Hi Hello welcome"
#endif

int main()
{
    printf("%s", MSG);
    return 0;
}
*/

#include <stdio.h>
#ifndef MSG
    #define MSG "Hi Hello welcome"
#endif

int main()
{
    printf("%s", MSG);
    return 0;
}