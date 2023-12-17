// C program to print reverse of words in
// a string.
#include <stdio.h>
#include <string.h>

// Driver code
int main()
{
	char str[] = "I AM A GEEK";
	int length = strlen(str);

	// Traverse string from end
	int i;
	for (i = length - 1; i >= 0; i--) {
		if (str[i] == ' ') {

			// putting the NULL character at the
			// position of space characters for
			// next iteration.
			str[i] = '\0';

			// Start from next character
			printf("%s ", &(str[i]) + 1);
		}
	}

	// printing the last word
	printf("%s", str);
	return 0;
}
