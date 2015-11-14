/*
 * Efficient way to multiply with 7
 */

#include <stdio.h>

int main()
{
	int n = 4;

	printf("(7 * %d) = %d", n, ((n << 3) - n));

	return 0;
}
