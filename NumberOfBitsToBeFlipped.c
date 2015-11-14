/*
 * Count number of bits to be flipped to convert A to B
 */

#include <stdio.h>

int main()
{
	int A = 73, B = 21;
	int result = A ^ B;
	int count = 0;

	while(result > 0)
	{
		count++;
		result = result & (result - 1);
	}

	printf("\nNumber of bits required to convert %d to %d = %d", A, B, count);

	return 0;
}
