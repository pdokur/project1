#include <stdio.h>

// Define a structure with padding
#pragma pack(push, 1)
struct PackedStruct {
    char a;
    int b;
    short c;
};
#pragma pack(pop)

// Define a structure without padding
struct UnpackedStruct {
    char a;
    int b;
    short c;
};

int main() {
    printf("Size of PackedStruct: %zu bytes\n", sizeof(struct PackedStruct));
    printf("Size of UnpackedStruct: %zu bytes\n", sizeof(struct UnpackedStruct));
    return 0;
}
