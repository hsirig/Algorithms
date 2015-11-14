/*
 * A programming puzzle
 */

#include <stdio.h>

#define STRINGIFY(x, y) y ## x

int main()
{
	printf("\nSTIRNGIFY(12, 36) = %d", STRINGIFY(12, 36));

	return 0;
}
