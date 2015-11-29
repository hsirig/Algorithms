/*
 * Check for Majority Element in a sroted array - Iterative
 */

#include <stdio.h>

int main()
{
	int inputArray[] = {1, 2, 3, 3, 3, 3, 10};
	int majorityElement = 3;

	/*
	 * int inputArray[] = {1, 1, 2, 4, 4, 4, 6, 6};
	 * int majorityElement = 4;
	 */

	/*
	 * int inputArray[] = {1, 1, 1, 2, 2};
	 * int majorityElement = 1;
	 */

	int totalElements = sizeof(inputArray) / sizeof(inputArray[0]);
	int i = 0;

	for(; i < totalElements; i++)
	{
		if(inputArray[i] == majorityElement)
		{
			break;
		}
	}
	if(inputArray[(i + (totalElements / 2))] == majorityElement)
	{
		printf("\n%d is a majority element.", inputArray[i]);
	}
	else
	{
		printf("\n%d is not a majority element.", inputArray[i]);
	}

	return 0;
}
