/*
 * Sum of digits in a single statement - Recursive
 */

#include <stdio.h>

int getSumOfDigits(int);

int getSumOfDigits(int n)
{
	static int sum = 0;

	sum = (n > 0) ? (n % 10) + getSumOfDigits(n / 10) : 0;

	return sum;
}

int main()
{

	int n = 3912;

	printf("\nSum of digits = %d", getSumOfDigits(n));

	return 0;
}
