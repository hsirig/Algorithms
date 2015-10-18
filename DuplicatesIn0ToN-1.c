/*
 * Find duplicates in O(n) time and O(1) extra space
 */

#include <stdio.h>

int main()
{
	int inputArray[] = {1, 2, 3, 1, 3, 6, 6, 3, 1, 2, 5, 6, 5, 13};
	int totalElements = sizeof(inputArray) / sizeof(inputArray[0]);
	int i = 0;

	for(; i < totalElements; i++)
	{
		if(inputArray[abs(inputArray[i])] < 0)
		{
			printf("\n%d is repeating.", abs(inputArray[i]));
		}
		inputArray[abs(inputArray[i])] = -1 * inputArray[abs(inputArray[i])];
	}

	return 0;
}
