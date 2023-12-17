// Online C compiler to run C program online
#include <stdio.h>
// Driver code
int main()
{
	int n = 20;
    int temp = 1;

	// Run loop until the only
	// set bit in temp crosses
	// MST of n.
	while (temp <= n)
	{
		// Toggle bit of n
		// corresponding to
		// current set bit in
		// temp.
		n = n ^ temp;

		// Move set bit to next
		// higher position.
		temp = temp << 1;
	}
	printf("%d\n",n);
	return 0;
}