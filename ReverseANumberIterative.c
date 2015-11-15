/*
 * Reverse a number - Iterative 
 */

#include <stdio.h>

int main()
{
	int num = 4829;
	int reverseNumber = 0;
	int base = 10;

	printf("\nReverse of %d is: ", num);
	while(num > 0)
	{
		reverseNumber = (reverseNumber * base) + (num % 10);
		num = num / 10;
	}
	printf("%d", reverseNumber);

	return 0;
}

