/*
 * Print numbers from 1 to 100 without a loop
 */

#include <stdio.h>

#define START 1
#define END 100

void printNumbers(int);


void printNumbers(int current)
{
	if(current <= END)
	{
		printf("\n%d", current);
		printNumbers(++current);
	}
	return;
}

int main()
{
	int current = START;

	printNumbers(current);
	return 0;
}
