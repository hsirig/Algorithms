/*
 * Write a program to reverse an array
 */
#include <stdio.h>

int main()
{
	int inputArray[] = {1, 2, 3, 4, 5, 6};
	int totalElements = sizeof(inputArray) / sizeof(int);
	int i = 0, itrEnd = totalElements / 2, temp = 0;

	for(; i < itrEnd; i++)
	{
		temp = inputArray[i];
		inputArray[i] = inputArray[totalElements - i - 1];
		inputArray[totalElements - i - 1] = temp;
	}
	printf("\nReversed array:");
	for(i = 0; i < totalElements; i++)
	{
		printf("\t%d", inputArray[i]);
	}

	return 0;
}
