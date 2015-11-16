#include <stdio.h>

int main()
{
	int x = 21;
	int y = 17;
	int result = 0;

	printf("\n%d x %d = ", x, y);
	while(y > 0)
	{
		if((y % 2) == 1)
		{
			result += x;
		}
		x = x * 2;
		y = y / 2;
	}
	printf("%d", result);

	return 0;
}
