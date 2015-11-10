/*
 * Majority Element
 */

#include <stdio.h>

int main()
{
	int inputArray[] = {3, 3, 4, 2, 4, 4, 2, 4, 4};

	/*
	 * int inputArray[] = {2, 2, 3, 5, 2, 2, 6};
	 * int inputArray[] = {1, 3, 3, 1, 2};
	 */

	int totalElements = sizeof(inputArray) / sizeof(inputArray[0]);
	int i = 1, count = 1, maxOccurringElement = inputArray[0];

	for(; i < totalElements; i++)
	{
		if(inputArray[i] == maxOccurringElement)
		{
			count++;
		}
		else
		{
			count--;
		}
		if(count == 0)
		{
			maxOccurringElement = inputArray[i];
			count = 1;
		}
	}
	count = 0;
	for(i = 0; i < totalElements; i++)
	{
		if(inputArray[i] == maxOccurringElement)
		{
			count++;
		}
	}
	if(count > (totalElements / 2))
	{
		printf("\nMajority element - %d.", maxOccurringElement);
	}
	else
	{
		printf("\nNo such element.");
	}

	return 0;
}
