/*
 * A Product Array Puzzle
 */

#include <stdio.h>

#define TOTAL_ELEMENTS 5

int main()
{
	int inputArray[] = {10, 3, 5, 6, 2};
	int totalElements = TOTAL_ELEMENTS;
	int product[TOTAL_ELEMENTS] = {0};
	int currentProduct = 1;
	int i = 0;

	for(; i < totalElements; i++)
	{
		product[i] = currentProduct;
		currentProduct *= inputArray[i];
	}
	currentProduct = 1;
	for(i = totalElements - 1; i >= 0; i--)
	{
		product[i] *= currentProduct;
		currentProduct *= inputArray[i];
	}
	i = 0;
	printf("\nThe product array is as follows:");
	for(; i < totalElements; i++)
	{
		printf("\t%d", product[i]);
	}

	return 0;
}
