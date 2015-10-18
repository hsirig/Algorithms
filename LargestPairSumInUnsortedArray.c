/*
 * Find the largest pair sum in an unsorted array
 */

#include <stdio.h>
#include <limits.h>

int main()
{
	int inputArray[] = {12, 34, 10, 6, 40};
	int totalElements = sizeof(inputArray) / sizeof(int);
	int maxPositive = INT_MIN;
	int secondMaxPositive = INT_MIN;
	int i = 0;

	for(; i < totalElements; i++)
	{
		if(inputArray[i] > maxPositive)
		{
			secondMaxPositive = maxPositive;
			maxPositive = inputArray[i];
		}
		else
		{
			secondMaxPositive = inputArray[i];
		}
	}
	printf("\nLargest pair sum is (%d + %d) = %d.", maxPositive, secondMaxPositive, (maxPositive + secondMaxPositive));

	return 0;
}
