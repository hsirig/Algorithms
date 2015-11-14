/*
 * Turn off the rightmost set bit in n 
 */

#include <stdio.h>

int main()
{
	int n = 12;

	/*
	 * Test cases:
	 * int n = 7;
	 */
	
	printf("\nAfter turning off the rightmost set bit in %d: %d", n, (n & (n - 1)));

	return 0;
}
