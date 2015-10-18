/*
 * Search an element in an array where difference between adjacent elements is 1
 */

#include <stdio.h>

int main()
{
	int inputArray[] = {8, 7, 6, 7, 6, 5, 4, 3, 2, 3, 4, 3};
	int elementToSearch = 3;

	/*
	 * Test case:
	 * int inputArray[] = {1, 2, 3, 4, 5, 4};
	 * int elementToSearch = 5;
	 */

	int totalElements = sizeof(inputArray) / sizeof(int);
	int i = 0;

	for(; i < totalElements; )
	{
		if(inputArray[i] == elementToSearch)
		{
			printf("\nElement - %d found at index - %d.", elementToSearch, i);
			break;
		}
		i += abs(inputArray[i] - elementToSearch);
	}
	if(i >= totalElements)
	{
		printf("\nElement - %d does not exist.", elementToSearch);
	}
	return 0;
}
