/*
 * Segregate 0s and 1s in an array
 */

#include <stdio.h>

int main()
{
	int inputArray[] = {0, 1, 0, 1, 0, 0, 1, 1, 1, 0};
	int i = 0;
	int totalElements = sizeof(inputArray) / sizeof(int);
	int j = totalElements - 1;
	int temp = 0;

	while(i < j)
	{
		while(inputArray[i] == 0)
		{
			i++;
		}
		while(inputArray[j] == 1)
		{
			j--;
		}
		temp = inputArray[i];
		inputArray[i] = inputArray[j];
		inputArray[j] = temp;
		i++;
		j--;
	}
	printf("\nThe segregated arrays is as follows:");
	for(i = 0; i < totalElements; i++)
	{
		printf("\t%d", inputArray[i]);
	}

	return 0;
}
