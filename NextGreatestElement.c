/*
 * Replace every element with the next greatest
 */

#include <stdio.h>

int main()
{
	int inputElement[] = {16, 17, 4, 3, 5, 2};
	int totalElements = sizeof(inputElement) / sizeof(inputElement[0]);
	int i = totalElements - 1, currentMaximum = -1, temp = 0;

	while(i >= 0)
	{
		temp = inputElement[i];
		inputElement[i] = currentMaximum;
		if(temp > currentMaximum)
		{
			currentMaximum = temp; 
		}
		i--;
	}
	i = 0;
	printf("\nModified array:");
	while(i < totalElements)
	{
		printf("\t%d", inputElement[i]);
		i++;
	}

	return 0;
}
