/*
 * Find a pair with maximum product in array of Integers
 */

#include <stdio.h>
#include <limits.h>

int main()
{
	int inputArray[] = {1, 4, 3, 6, 7, 0};

	/*
	 * Test case:
	 * int inputArray[] = {-1, -3, -4, 2, 0, -5};
	 */

	int maxPositive = INT_MIN;
	int secondMaxPositive = INT_MIN;
	int minNegative = INT_MAX;
	int secondMinNegative = INT_MAX;
	int i = 0;
	int currentElement = 0;
	int product = 0;
	int maxPositiveProduct = 1;
	int maxNegativeProduct = 1;
	int totalcurrentElements = sizeof(inputArray) / sizeof(int);

	for(; i < totalcurrentElements; i++)
	{
		currentElement = inputArray[i];
		if(currentElement != 0)
		{
			if(currentElement > 0)
			{
				if(currentElement > maxPositive)
				{
					secondMaxPositive = maxPositive;
					maxPositive = currentElement;
				}
				else
				{
					secondMaxPositive = currentElement;
				}
			}
			else
			{
				if(currentElement < minNegative)
				{
					secondMinNegative = minNegative;
					minNegative = currentElement;
				}
				else
				{
					secondMinNegative = currentElement;
				}
			}
		}
	}
	maxPositiveProduct = maxPositive * secondMaxPositive;
	maxNegativeProduct = minNegative * secondMinNegative;
	printf("\nPair with the maximum product is ");
	if(maxPositiveProduct > maxNegativeProduct)
	{
		product = maxPositiveProduct;
		printf("(%d * %d) - %d.", maxPositive, secondMaxPositive, product);
	}
	else
	{
		product = maxNegativeProduct;
		printf("(%d * %d) - %d.", minNegative, secondMinNegative, product);
	}

	return 0;
}
