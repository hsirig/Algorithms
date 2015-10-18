/*
 * Write a program to reverse an array
 */
#include <stdio.h>

void reverseArray(int[], int, int);

void reverseArray(int inputArray[], int start, int end)
{
	if(start >= end)
	{
		return;
	}
	int temp = inputArray[start];
	inputArray[start] = inputArray[end];
	inputArray[end] = temp;
	reverseArray(inputArray, (start + 1), (end - 1));
}

int main()
{
	int inputArray[] = {1, 2, 3, 4, 5, 6};
	int totalElements = sizeof(inputArray) / sizeof(int);
	int i = 0;

	printf("\nReversed array:");
	reverseArray(inputArray, 0, (totalElements - 1));
	for(i = 0; i < totalElements; i++)
	{
		printf("\t%d", inputArray[i]);
	}

	return 0;
}
