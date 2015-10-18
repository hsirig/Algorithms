/*
 * Find sum of all elements in a matrix except the elements in row and/or column of given cell
 */

#include <stdio.h>

#define ROWS 3
#define COLS 3

struct cellIndex
{
	int x;
	int y;
};

typedef struct cellIndex cellIndex;

int getRowSum(int[ROWS][COLS], int);
int getColSum(int[ROWS][COLS], int);
int getMatrixSum(int[ROWS][COLS]);

int getRowSum(int inputMatrix[ROWS][COLS], int row)
{
	int i = 0, sum = 0;

	for(; i < COLS; i++)
	{
		sum += inputMatrix[row][i];
	}

	return sum;
}

int getColSum(int inputMatrix[ROWS][COLS], int col)
{
	int i = 0, sum = 0;

	for(; i < COLS; i++)
	{
		sum += inputMatrix[i][col];
	}

	return sum;
}

int getMatrixSum(int inputMatrix[ROWS][COLS])
{
	int i = 0, j = 0, sum = 0;

	for(; i < ROWS; i++)
	{
		for(j = 0; j < COLS; j++)
		{
			sum += inputMatrix[i][j];
		}
	}

	return sum;
}

int main()
{
	int inputMatrix[ROWS][COLS] = {
			{1, 1, 2},
			{3, 4, 6},
			{5, 3, 2}
	};
	cellIndex cellIndices[] = {
			{0, 0},
			{1, 1},
			{0, 1}
	};
	int totalCells = 3;
	int rowSum[ROWS] = {0};
	int colSum[COLS] = {0};
	int i = 0, x = 0, y = 0, sum = 0;
	int totalSum = getMatrixSum(inputMatrix);

	for(; i < ROWS; i++)
	{
		rowSum[i] = getRowSum(inputMatrix, i);
	}
	for(i = 0; i < COLS; i++)
	{
		colSum[i] = getColSum(inputMatrix, i);
	}

	for(i = 0; i < totalCells; i++)
	{
		x = cellIndices[i].x;
		y = cellIndices[i].y;
		sum = totalSum - rowSum[x] - colSum[y] + inputMatrix[x][y];
		printf("\nSum of elements except (%d,%d) is - %d", x, y, sum);
	}

	return 0;
}
