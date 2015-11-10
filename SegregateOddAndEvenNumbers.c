/*
 * Segregate odd and even in an array
 */

#include <stdio.h>

int main()
{
	int inputArray[] = {12, 34, 45, 9, 8, 90, 3};
	int i = 0;
	int totalElements = sizeof(inputArray) / sizeof(int);
	int j = totalElements - 1;
	int temp = 0;

	while(i < j)
	{
		while((inputArray[i] % 2) == 0)
		{
			i++;
		}
		while((inputArray[j] % 2) == 1)
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
