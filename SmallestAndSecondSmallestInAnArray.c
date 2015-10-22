/*
 * Find the smallest and second smallest element in an array
 */

#include <stdio.h>
#include <limits.h>

int main()
{
	int inputArray[] = {12, 13, 1, 10, 34, 1};
	int totalElements = sizeof(inputArray) / sizeof(inputArray[0]);
	int smallest = INT_MAX;
	int secondSmallest = INT_MAX;
	int i = 0;

	for(; i < totalElements; i++)
	{
		if(inputArray[i] < smallest)
		{
			secondSmallest = smallest;
			smallest = inputArray[i];
		}
		else if((inputArray[i] < secondSmallest) && (smallest != inputArray[i]))
		{
			secondSmallest = inputArray[i];
		}
	}
	printf("\nSmallest = %d, Second smallest = %d.", smallest, secondSmallest);

	return 0;
}
