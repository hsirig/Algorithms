/*
 * Find the n'th Magic Number
 */

#include <stdio.h>
#include <math.h>

int main()
{
	int n = 7;

	/*
	 * int n = 2;
	 */

	/*
	 * int n = 5;
	 */
	
	int magicNumber = 0;
	int base = 5, index = 1;

	while(n > 0)
	{
		magicNumber = magicNumber + ((n & 1) == 1 ? pow(base, index) : 0);
		index++;
		n = n >> 1;
	}
	printf("Magic number = %d", magicNumber);

	return 0;
}
