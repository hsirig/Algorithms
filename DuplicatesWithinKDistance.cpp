/*
 * Check if a given array contains duplicate elements within k distance from each other
 */

#include <iostream>
#include <set>
using namespace std;

int main()
{
	int inputElement[] = {1, 2, 3, 4, 1, 2, 3, 4};
	int k = 3;

	/*
	 * int inputElement[] = {1, 2, 3, 1, 4, 5};
	 * int k = 3;
	 */
	
	/*
	 * int inputElement[] = {1, 2, 3, 4, 5};
	 * int k = 3;
	 */
	
	/*
	 * int inputElement[] = {1, 2, 3, 4, 4};
	 * int k = 3;
	 */

	int totalElements = sizeof(inputElement) / sizeof(inputElement[0]);
	set<int> inputMap;
	int i = 0;

	while(i < totalElements)
	{
		if(inputMap.find(inputElement[i]) != inputMap.end())
		{
			cout<<"\nDuplicate element "<<inputElement[i]<<" found within "<<k<<" distance.";
		}
		if(i >= k)
		{
			inputMap.erase(inputElement[i - k]);
		}
		inputMap.insert(inputElement[i]);
		i++;
	}

	return 0;
}
