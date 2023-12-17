/**/
#include <stdio.h>
//#include <stdlib.h>

int main()
{
    int a[]={1,2,3,4,51};
    int b[]={6,7,8,9,101};
    int *aptr_start, *aptr_end=NULL;
    int *bptr_start, *bptr_end=NULL;
    int aptr_size=sizeof(a)/sizeof(a[0]);
    int bptr_size=sizeof(b)/sizeof(b[0]);
    aptr_start=a;
    bptr_start=b;

    printf("these are A array\n");
    for (int i=0; i<aptr_size; i++)
    {
        printf("%d\n", *(aptr_start+i));
    }
    printf("these are B array\n");
    for (int i=0; i<aptr_size; i++)
    {
        printf("%d\n", *(bptr_start+i));
    }
  /* for ( aptr_end=(aptr_start+(aptr_size-1)),bptr_end=(bptr_start+(bptr_size-1));
     aptr_start<=aptr_end && bptr_start<=bptr_end; aptr_start++, bptr_start++)
    {
        *aptr_start ^= *bptr_start;
        *bptr_start ^= *aptr_start;
        *aptr_start ^= *bptr_start;
    }*/
    for ( int i=0; i< aptr_size; i++ )
    {
        *(aptr_start+i) ^= *(bptr_start+i);
        *(bptr_start+i) ^= *(aptr_start+i);
        *(aptr_start+i) ^= *(bptr_start+i);
    }
    printf("After swapping  A array\n");
    for (int i=0; i<aptr_size; i++)
    {
        printf("%d\n", *(aptr_start+i));
    }
    printf("After swapping  B array\n");
    for (int i=0; i<aptr_size; i++)
    {
        printf("%d\n", *(bptr_start+i));
    }


}

/*


#include <stdio.h>

#define MAX_SIZE 100    // Maximum array size


// Function declarations //
void inputArray(int *arr, int size);
void printArray(int *arr, int size);
void swapArray(int *sourceArr, int *destArr, int size);




int main()
{
    int sourceArr[MAX_SIZE];
    int destArr[MAX_SIZE];

    int size;


    // Input array size
    printf("Enter size of array: ");
    scanf("%d", &size);

    // Input elements of destination array
    printf("Enter %d elements in source array: ", size);
    inputArray(sourceArr, size);


    // Input element of destination array
    printf("Enter %d elements in destination array: ", size);
    inputArray(destArr, size);


    //Print elements of both arrays before swapping
     
    printf("\n\nSource array before swapping: ");
    printArray(sourceArr, size);

    printf("\nDestination array before swapping: ");
    printArray(destArr, size);


    //Swap elements of both arrays. //
    swapArray(sourceArr, destArr, size);


    // Print elements of both arrays after swapping
     
    printf("\n\nSource array after swapping: ");
    printArray(sourceArr, size);

    printf("\nDestination array after swapping: ");
    printArray(destArr, size);

    
    return 0;
}



/**
 * Function used to read input from user in an array.
 *
 * @arr     Pointer to array to store input
 * @size    Size of the array
 *
void inputArray(int *arr, int size)
{
    // Pointer to last element of array.
    int *arrEnd = (arr + (size - 1));


    // Input elements in array using pointer
    while(arr <= arrEnd)
        scanf("%d", arr++);
}



/**
 * Function used to print elements of array.
 * 
 * @arr     Pointer to array, which is to print.
 * @size    Size of the array
 
void printArray(int *arr, int size)
{
    // Pointer to last element of array.
    int *arrEnd = (arr + (size - 1));


    // Print elements of array one by one
    while(arr <= arrEnd)
        printf("%d, ", *(arr++));
}



/**
 * Function to swap elements of two arrays.
 * 
 * @sourceArr       Pointer to source array to swap.
 * @destArr         Pointer to destination array to swap.
 * @size            Size of array.
 
void swapArray(int * sourceArr, int * destArr, int size)
{
    // Pointer to last element of source array
    int * sourceArrEnd = (sourceArr + (size - 1));

    // Pointer to last element of destination array
    int * destArrEnd   = (destArr + (size - 1));


    // Swap individual element of both arrays
     
    while(sourceArr <= sourceArrEnd && destArr <= destArrEnd)
    {
        *sourceArr ^= *destArr;
        *destArr   ^= *sourceArr;
        *sourceArr ^= *destArr;

        // Increment source array to point to next element
        sourceArr++;

        // Increment destination array to point to next element
        destArr++;
    }
}*/