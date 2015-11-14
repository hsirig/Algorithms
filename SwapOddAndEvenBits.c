/*
 * Swap all odd and even bits 
 */

#include <stdio.h>

int main()
{
	unsigned int n = 23;
	unsigned int oddMask = 0x55555555;
	unsigned int evenMask = 0xAAAAAAAA;
	unsigned int result = 0;

	result = (((n & oddMask) << 1) | ((n & evenMask) >> 1));
	printf("%u", result);

	return 0;
}
