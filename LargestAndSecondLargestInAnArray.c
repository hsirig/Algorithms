/*
 * Find the largest and second largest element in an array
 */

#include <stdio.h>
#include <limits.h>

int main()
{
	int inputArray[] = {12, 13, 1, 10, 34, 1};
	int totalElements = sizeof(inputArray) / sizeof(inputArray[0]);
	int largest = INT_MIN;
	int secondLargest = INT_MIN;
	int i = 0;

	for(; i < totalElements; i++)
	{
		if(inputArray[i] > largest)
		{
			secondLargest = largest;
			largest = inputArray[i];
		}
		else if((inputArray[i] > secondLargest) && (largest != inputArray[i]))
		{
			secondLargest = inputArray[i];
		}
	}
	printf("\nLargest = %d, Second largest = %d.", largest, secondLargest);

	return 0;
}
