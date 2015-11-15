/*
 * Reverse a number - Recursive 
 */

#include <stdio.h>

int reverseNumber(int);

int reverseNumber(int num)
{
	int base = 10;
	static int revNum = 0;

	if(num > 0)
	{
		revNum = (revNum * base) + (num % 10);
		reverseNumber(num / 10);
	}

	return revNum;
}
int main()
{
	int num = 8362;

	printf("\nReverse of %d is: %d", num, reverseNumber(num));

	return 0;
}

