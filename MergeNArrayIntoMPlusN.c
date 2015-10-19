/*
 * Merge an array of size n into another array of size m+n
 */

#include <stdio.h>

#define FREE_SPACE -1

void printArray(int[], int);

void printArray(int inputArray[], int arrayLen)
{
	int i = 0;

	printf("\n");
	for(; i < arrayLen; i++)
	{
		printf("%d\t", inputArray[i]);
	}
}

int main()
{
	int mPlusNArray[] = {2, FREE_SPACE, 7, FREE_SPACE, FREE_SPACE, 10, FREE_SPACE};
	int nArray[] = {5, 8, 12, 14};

	/*
	 * Test case:
	 * int mPlusNArray[] = {2, 8, FREE_SPACE, FREE_SPACE, FREE_SPACE, 13, FREE_SPACE, 15, 20};
	 * int nArray[] = {5, 7, 9, 25};
	 */

	int lenMPlusNArray = sizeof(mPlusNArray) / sizeof(int);
	int lenNArray = sizeof(nArray) / sizeof(int);
	int i = 0, j = 0, k = 0;

	for(; i < lenMPlusNArray; i++)
	{
		if(mPlusNArray[i] != FREE_SPACE)
		{
			mPlusNArray[k] = mPlusNArray[i];
			k++;
		}
	}
	j = k - 1;
	for(; k < lenMPlusNArray; k++)
	{
		mPlusNArray[k] = FREE_SPACE;
	}
	k = lenNArray - 1;
	i = lenMPlusNArray - 1;
	while((j >= 0) && (k >= 0))
	{
		if(mPlusNArray[j] > nArray[k])
		{
			mPlusNArray[i] = mPlusNArray[j];
			j--;
		}
		else
		{
			mPlusNArray[i] = nArray[k];
			k--;
		}
		i--;
	}
	while(j >= 0)
	{
		mPlusNArray[i] = mPlusNArray[j];
		i--;
		j--;
	}
	while(k >= 0)
	{
		mPlusNArray[i] = nArray[k];
		i--;
		k--;
	}
	printf("\nOn merge:");
	printArray(mPlusNArray, lenMPlusNArray);

	return 0;
}
