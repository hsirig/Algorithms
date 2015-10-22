/*
 * Find the Missing Number
 */

#include <stdio.h>

int main()
{
	int inputArray[] = {1, 2, 3, 4, 6, 7, 8};
	int totalElements = sizeof(inputArray) / sizeof(inputArray[0]);
	int i = 0, missingNumber = 0;

	for(; i < totalElements; i++)
	{
		missingNumber ^= (inputArray[i] ^ (i + 1));
	}
	missingNumber ^= (i + 1);
	printf("\nThe missing number is %d.", missingNumber);

	return 0;
}
