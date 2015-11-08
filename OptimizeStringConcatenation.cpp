/*
 * Optimize cost of string concatenation
 */

#include <iostream>
#include <array>
#include <algorithm>

using namespace std;

int main()
{
	array<int, 3> inputStringLengths = {1, 5, 2};

	/*
	 * array<int, 4> inputStringLengths = {2, 9, 7, 6};
	 */

	array<int, 3>::iterator arrayItr = inputStringLengths.begin();
	int i = 1, currentCost = 0, totalCost = 0;

	sort(inputStringLengths.begin(), inputStringLengths.end());
	currentCost = inputStringLengths[0];
	for(; i < inputStringLengths.size(); i++)
	{
		currentCost += inputStringLengths[i];
		totalCost += currentCost;
	}
	cout<<"\nOptimized cost of string concatenation = "<<totalCost;

	return 0;
}
