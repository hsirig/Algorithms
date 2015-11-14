/*
 * Compute 3.5n without using *. % and /
 */

#include <stdio.h>

int main()
{
	int n = 2;

	/*
	 * int n = 4;
	 */

	/*
	 * int n = 5;
	 */

	int result = 0;

	result =  ((n << 3) - n) >> 1;
	printf("3.5 * %d = %d", n, result);

	return 0;
}
