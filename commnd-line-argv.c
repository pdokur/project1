#include <stdio.h>

int main(int argc, const char * argv[]) {
    printf("The name of the program is: %s %d\n", argv[0], argc);

    if (argc > 1) {
        printf("The following arguments were passed in:\n");
        for (int i = 1; i < argc; i++) {
            printf("%s\n", argv[i]);
        }
    } else {
        printf("No arguments were passed in.\n");
    }

    return 0;
}
