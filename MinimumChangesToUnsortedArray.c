/*
 * Find the Minimum length Unsorted Subarray, sorting which makes the complete array sorted
 */

#include <stdio.h>
#include <limits.h>

int main()
{
	int inputArray[] = {10, 12, 20, 30, 25, 40, 32, 31, 35, 50, 60};

	/*
	 * int inputArray[] = {0, 1, 15, 25, 6, 7, 30, 40, 50};
	 */

	int totalElements = sizeof(inputArray) / sizeof(inputArray[0]);
	int startIndex = 0, endIndex = 0, i = 1;
	int maxElement = INT_MIN, minElement = INT_MAX;

	for(; i < totalElements; i++)
	{
		if(inputArray[i] < inputArray[i - 1])
		{
			startIndex = i - 1;
			break;
		}
	}
	i = totalElements - 1;
	for(; i > 0; i--)
	{
		if(inputArray[i] < inputArray[i - 1])
		{
			endIndex = i;
			break;
		}
	}
	for(i = startIndex; i <= endIndex; i++)
	{
		if(inputArray[i] > maxElement)
		{
			maxElement = inputArray[i];
		}
		else if(inputArray[i] < minElement)
		{
			minElement = inputArray[i];
		}
	}
	for(i = 0; i < startIndex; i++)
	{
		if(inputArray[i] > minElement)
		{
			startIndex = i;
			break;
		}
	}
	i = totalElements - 1;
	for(; i > endIndex; i--)
	{
		if(inputArray[i] < maxElement)
		{
			endIndex = i;
			break;
		}
	}
	printf("The required indices are %d, %d.", startIndex, endIndex);

	return 0;
}
