/*
 * Find common elements in three sorted arrays
 */

#include <stdio.h>

int main()
{
	int inputArrayOne[] = {1, 5, 10, 20, 40, 80};
	int inputArrayTwo[] = {6, 7, 20, 80, 100};
	int inputArrayThree[] = {3, 4, 15, 20, 30, 70, 80, 120};

	/*
	 * Test case:
	 * int inputArrayOne[] = {1, 5, 5};
	 * int inputArrayTwo[] = {3, 4, 5, 5, 10};
	 * int inputArrayThree[] = {5, 5, 10, 20};
	 */

	int lenArrayOne = sizeof(inputArrayOne) / sizeof(inputArrayOne[0]);
	int lenArrayTwo = sizeof(inputArrayTwo) / sizeof(inputArrayTwo[0]);
	int lenArrayThree = sizeof(inputArrayThree) / sizeof(inputArrayThree[0]);
	int i = 0, j = 0, k = 0;

	printf("\nThe common elements are as follows:");
	while((i < lenArrayOne) && (j < lenArrayTwo) && (k < lenArrayThree))
	{
		if(inputArrayOne[i] < inputArrayTwo[j])
		{
			i++;
		}
		else if(inputArrayTwo[j] < inputArrayThree[k])
		{
			j++;
		}
		else if((inputArrayOne[i] == inputArrayTwo[j]) && (inputArrayTwo[j] == inputArrayThree[k]))
		{
			printf("\t%d", inputArrayOne[i]);
			i++;
			j++;
			k++;
		}
		else
		{
			k++;
		}
	}

	return 0;
}
