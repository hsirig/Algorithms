/*
 * Lucky Numbers 
 */

#include <stdio.h>

int main()
{
	int n = 19;
	int step = 2;

	printf("\n%d is ", n);
	if((n % 2) == 0)
	{
		printf("not lucky.");
	}
	else if(n < step)
	{
		printf("lucky.");
	}
	else
	{
		while(step < n)
		{
			if((n % step) == 0)
			{
				printf("not lucky.");
				break;
			}
			n = n - (n / step);
			step++;
		}
	}
	if(n < step)
	{
		printf("lucky.");
	}

	return 0;
}
