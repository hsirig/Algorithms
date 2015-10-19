/*
 * Move all zeroes to end of array
 */

#include <stdio.h>
int main()
{
	int inputArray[] = {1, 9, 8, 4, 0, 0, 2, 7, 0, 6, 0};
	int totalElements = sizeof(inputArray) / sizeof(inputArray[0]);
	int i = 0, j = 0, totalZeroes = 0;

	for(; i < totalElements; i++)
	{
		if(inputArray[i] != 0)
		{
			inputArray[j] = inputArray[i];
			j++;
		}
	}
	for(; j < totalElements; j++)
	{
		inputArray[j] = 0;
	}
	printf("\nThe resulting array is as follows: ");
	for(i = 0; i < totalElements; i++)
	{
		printf("\t%d", inputArray[i]);
	}

	return 0;
}
