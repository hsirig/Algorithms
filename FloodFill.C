/*
 * Flood Fill Algorithm
 */

#include <stdio.h>

#define ROWS 8
#define COLS 8

void printMatrix(int[ROWS][COLS]);
void FloodFill(int[ROWS][COLS], int, int, int, int);

void printMatrix(int inputMatrix[ROWS][COLS])
{
	int i = 0, j = 0;

	for(; i < ROWS; i++)
	{
		printf("\n");
		for(j = 0; j < COLS; j++)
		{
			printf("%d\t", inputMatrix[i][j]);
		}
	}
}

void FloodFill(int inputMatrix[ROWS][COLS], int x, int y, int currentColour, int newColour)
{
	if((x == ROWS) || (y == COLS))
	{
		return;
	}
	if(inputMatrix[x][y] != currentColour)
	{
		return;
	}
	inputMatrix[x][y] = newColour;
	FloodFill(inputMatrix, (x - 1), y, currentColour, newColour);
	FloodFill(inputMatrix, x, (y - 1), currentColour, newColour);
	FloodFill(inputMatrix, x, (y + 1), currentColour, newColour);
	FloodFill(inputMatrix, (x + 1), y, currentColour, newColour);
}

int main()
{
	int inputMatrix[ROWS][COLS] = {
			{1, 1, 1, 1, 1, 1, 1, 1},
			{1, 1, 1, 1, 1, 1, 0, 0},
			{1, 0, 0, 1, 1, 0, 1, 1},
			{1, 2, 2, 2, 2, 0, 1, 0},
			{1, 1, 1, 2, 2, 0, 1, 0},
			{1, 1, 1, 2, 2, 2, 2, 0},
			{1, 1, 1, 1, 1, 2, 1, 1},
			{1, 1, 1, 1, 1, 2, 2, 1}
	};
	int x = 4, y = 4, newColour = 3;

	int currentColour = inputMatrix[x][y];
	printf("\nBefore applying Flood Fill algorithm:");
	printMatrix(inputMatrix);
	FloodFill(inputMatrix, x, y, currentColour, newColour);
	printf("\nAfter applying Flood Fill algorithm:");
	printMatrix(inputMatrix);

	return 0;
}
