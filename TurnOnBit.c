/*
 * Turn on k'th bit in n 
 */

#include <stdio.h>

int main()
{
	int n = 27, k = 3;

	/*
	 * Test cases:
	 * int n = 15, k = 2;
	 * int n = 15, k = 3;
	 * int n = 15, k = 4;
	 */
	
	printf("\nAfter turning off bit - %d in %d: %d", k, n, (n | (1 << (k - 1))));

	return 0;
}
