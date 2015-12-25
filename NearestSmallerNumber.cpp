/*
 * Find the nearest smaller numbers on left side in an array
 */

#include <iostream>
#include <stack>
using namespace std;

int main()
{
	int inputElement[] = {1, 6, 4, 10, 2, 5};

	/*
	 * int inputElement[] = {1, 3, 0, 2, 5};
	 */
	
	int totalElements = sizeof(inputElement) / sizeof(inputElement[0]);
	stack<int> auxillaryStack;
	int i = 0;

	while(i < totalElements)
	{
		while(!auxillaryStack.empty() && (auxillaryStack.top() >= inputElement[i]))
		{
			auxillaryStack.pop();
		}
		cout<<"\n";
		if(!auxillaryStack.empty())
		{
			cout<<auxillaryStack.top();
		}
		else
		{
			cout<<"-";
		}
		auxillaryStack.push(inputElement[i]);
		i++;
	}

	return 0;
}
