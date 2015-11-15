/*
 * Find the n'th Fibonacci number
 */

#include <stdio.h>
#include <math.h>

#define GOLDEN_RATIO 1.61803

int main()
{
	int n = 5;

	/*
	 * int n = 2;
	 */

	/*
	 * int n = 7;
	 */
	
	int nThFibonacciNumber = 0;

	nThFibonacciNumber = (pow(GOLDEN_RATIO, n) / pow(5, 0.5)) + 0.5;
	printf("Fibonacci number = %d", nThFibonacciNumber);

	return 0;
}
