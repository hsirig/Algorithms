/*
 * Leaders in an array
 */


#include <stdio.h>

int main()
{
	int inputArray[] = {16, 17., 4, 3, 5, 2};
	int totalElements = sizeof(inputArray) / sizeof(int);
	int i = totalElements - 1;
	int maximumElementSoFar = 0;

	for(; i >= 0; i--)
	{
		if(inputArray[i] > maximumElementSoFar){
			printf("\n%d is a leader.", inputArray[i]);
			maximumElementSoFar = inputArray[i];
		}
	}

	return 0;
}
