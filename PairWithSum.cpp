/*
 * Given an array A[] and a number x, check for pair in A[] with sum as x
 */

#include <iostream>
#include <map>

using namespace std;

int main()
{
	int inputArray[] = {1, 4, 45, 6, 10, -8};
	int sum = 16;
	int totalElements = sizeof(inputArray) / sizeof(inputArray[0]);
	int i = 0, diff = 0;
	map<int, int> inputMap;

	for(; i < totalElements; i++)
	{
		if(inputMap.find(inputArray[i]) == inputMap.end())
		{
			inputMap[inputArray[i]] = 1;
		}
		else
		{
			inputMap[inputArray[i]]++;
		}
	}
	for(i = 0; i < totalElements; i++)
	{
		diff = sum - inputArray[i];
		if(inputMap.find(diff) != inputMap.end())
		{
			if(((inputArray[i] == diff) && (inputMap.count(diff) > 1)) || (inputArray[i] != diff))
			{
				cout<<"\nPair found - "<<inputArray[i]<<" + "<<diff<<" = "<<sum;
				break;
			}
		}
	}

	if(i == totalElements)
	{
		cout<<"\nNo pair found.";
	}

	return 0;
}
