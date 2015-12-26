/*
 * Find next greater number with same set of digits
 */

#include <iostream>
#include <algorithm>
#include <string>
#include <climits>

using namespace std;

void swap(char&, char&);

void swap(char& x, char& y)
{
	char temp = x;
	x = y;
	y = temp;
}

int main()
{
	string number = "218765";

	/*
	 * string number = "1234";
	 */

	/*
	 * string number = "4312";
	 */

	/*
	 * string number = "534976";
	 */

	int i = 0, itrEnd = number.length() - 1, swapValue = 0, flag = 0;
	int tempIndex = -1, minimumSoFar = INT_MAX, minimumIndex = -1;

	i = itrEnd;
	while(i > 0)
	{
		if(number.at(i) > number.at(i - 1))
		{
			tempIndex = i - 1;
			break;
		}
		i--;
	}
	if(i == 0)
	{
		flag = 0;
	}
	else if(i == itrEnd)
	{
		swap(number.at(itrEnd), number.at(itrEnd - 1));
		flag = 1;
	}
	else
	{
		i++;
		while(i <= itrEnd)
		{
			if(number.at(i) < minimumSoFar)
			{
				minimumSoFar = number.at(i);
				minimumIndex = i;
			}
			i++;
		}
		swap(number.at(tempIndex), number.at(minimumIndex));
		sort((number.begin() + tempIndex + 1), number.end());
		flag = 1;
	}
        if(flag == 0)
	{
		cout<<"\nNo bigger number exists.";
	}
	else
	{
		cout<<"\nNext bigger number = "<<number;
	}

	return 0;
}
