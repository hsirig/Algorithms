/*
 * Sum of digits in a single statement - Iterative 
 */

#include <stdio.h>

int main()
{

	int n = 148;
	int sum = 0;

	for(; n > 0; sum += (n % 10), n = n / 10);

	printf("\nSum of digits = %d", sum);

	return 0;
}
