/*
 * Find the Number Occurring Odd Number of Times
 */

#include <stdio.h>

int main()
{
	int inputArray[] = {1, 2, 3, 2, 3, 1, 3};
	int totalElements = sizeof(inputArray) / sizeof(int);
	int i = 0, number = 0;

	for(; i < totalElements; i++)
	{
		number = number ^ inputArray[i];
	}
	printf("\nNumber occurring odd number of times - %d.", number);

	return 0;
}
