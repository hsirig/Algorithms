/*
 * Search in a row wise and column wise sorted matrix
 */

#include <stdio.h>

#define ROWS 4
#define COLS 4

int main()
{
	int inputMatrix[ROWS][COLS] = {
			{10, 20, 30, 40},
			{15, 25, 35, 45},
			{27, 29, 37, 48},
			{32, 33, 39, 50}
	};
	int elementToSearch = 29;
	int totalElements = sizeof(inputMatrix) / sizeof(inputMatrix[0]);
	int  i = 0, j = COLS - 1;

	while((i < ROWS) && (j >= 0))
	{
		if(inputMatrix[i][j] == elementToSearch)
		{
			printf("\nElement - %d found at (%d,%d).", elementToSearch, i, j);
			break;
		}
		else if(elementToSearch < inputMatrix[i][j])
		{
			j = j - 1;
		}
		else
		{
			i = i + 1;
		}
	}
	if((i == ROWS) || (j < 0))
	{
		printf("\n%d does not exist.", elementToSearch);
	}

	return 0;
}
