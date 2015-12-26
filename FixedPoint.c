/*
 * Find a Fixed Point in a given array
 */

#include <stdio.h>

int main()
{
	int inputArray[] = {-10, -5, 0, 3, 7};
 	
	/*
	 * int inputArray[] = {-10, -5, 3, 4, 7, 9};
	 */

	/*
	 * int inputArray[] = {0, 2, 5, 8, 17};
	 */

	int totalElements = sizeof(inputArray) / sizeof(inputArray[0]);
	int low = 0, high = totalElements;
	int mid = 0;


	while(low <= high)
	{
		mid = low + (high - low) / 2;	
		if(inputArray[mid] == mid)
		{
			printf("\nFixed point = %d", mid);
			break;
		}
		if(inputArray[mid] < mid)
		{
			low = mid + 1;
		}
		else
		{
			high = mid - 1;
		}
	}
	if(low > high)
	{
		printf("\nNo fixed point.");
	}

	
	return 0;
}
