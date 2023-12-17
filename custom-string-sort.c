#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int compareStrings(const void* a, const void* b, const void* ref) {
    const char* stra = *(const char**)a;
    const char* strb = *(const char**)b;
    const char* strref = (const char*)ref;

    // Find the position of each string in the reference string
    const char* posa = strstr(strref, stra);
    const char* posb = strstr(strref, strb);

    return posa - posb;
}

void sortStrings(char* arr[], int n, const char* ref) {
    qsort(arr, n, sizeof(char*),
          (int (*)(const void*, const void*, const void*))compareStrings, ref);
}

int main() {
    char* strings[5] = {"apple", "banana", "cherry", "date", "elderberry"};
    const char* ref = "nbcda";

    // Print the unsorted array
    printf("Unsorted Array:\n");
    for (int i = 0; i < 5; i++) {
        printf("%s ", strings[i]);
    }

    // Sort the array using the reference string
    sortStrings(strings, 5, ref);

    // Print the sorted array
    printf("\nSorted Array:\n");
    for (int i = 0; i < 5; i++) {
        printf("%s ", strings[i]);
    }

    return 0;
}
