/*
 * Power set of a given set 
 */

#include <stdio.h>

int main()
{
	int inputSet[] = {1, 2, 3};
	int i = 0, j = 0;
	int totalElements = (sizeof(inputSet) / sizeof(inputSet[0]));
	int end = 1 << totalElements;

	printf("\nThe power set is as follows:");
	for(; i < end; i++)
	{
		printf("\n{");
		for(j = 0; j < totalElements; j++)
		{
			if(i & (1 << j))
			{
				printf("%d, ", inputSet[j]);
			}
		}
		printf("}");
	}
	
	return 0;
}
