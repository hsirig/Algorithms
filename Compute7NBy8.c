/*
 * Compute 7n/8 without using division and multiplication operators 
 */

#include <stdio.h>

int main()
{
	int n = 9;

	int result = 0;

	result =  n - (n >> 3);
	printf("(7 * %d) / 8 = %d", n, result);

	return 0;
}
