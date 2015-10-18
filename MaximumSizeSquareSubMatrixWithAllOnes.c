/*
 * Maximum size square sub-matrix with all 1s
 */

#include <stdio.h>

#define ROWS 6
#define COLS 5

int getMin(int, int, int);

int getMin(int x, int y, int z)
{
	if((x < y) && (x < z))
	{
		return x;
	}
	if(y < z)
	{
		return y;
	}

	return z;
}

int main()
{
	int inputMatrix[ROWS][COLS] = {
			{0, 1, 1, 0, 1},
			{1, 1, 0, 1, 0},
			{0, 1, 1, 1, 0},
			{1, 1, 1, 1, 0},
			{1, 1, 1, 1, 1},
			{0, 0, 0, 0, 0}
	};
	int auxillaryMatrix[ROWS][COLS] = {0};
	int i = 0, j = 0;
	int count = 0, endI = 0, endJ = 0;

	for(; i < COLS; i++)
	{
		auxillaryMatrix[0][i] = (inputMatrix[0][i] == 0) ? 0 : 1;
	}
	for(i = 0; i < ROWS; i++)
	{
		auxillaryMatrix[i][0] = (inputMatrix[i][0] == 0) ? 0 : 1;
	}
	for(i = 1; i < ROWS; i++)
	{
		for(j = 1; j < COLS; j++)
		{
			if(inputMatrix[i][j] == 1)
			{
				auxillaryMatrix[i][j] = getMin(auxillaryMatrix[i - 1][j], auxillaryMatrix[i - 1][j - 1], auxillaryMatrix[i][j - 1]) + 1;
			}
			else
			{
				auxillaryMatrix[i][j] = 0;
			}
		}
	}
	for(i = 0; i < ROWS; i++)
	{
		for(j = 0; j < COLS; j++)
		{
			if(auxillaryMatrix[i][j] >= count)
			{
				count = auxillaryMatrix[i][j];
				endI = i;
				endJ = j;
			}
		}
	}
	printf("\nSize of the largest square sub-matrix with all ones (i=%d, j=%d) = %d.", endI, endJ, count);

	return 0;
}
