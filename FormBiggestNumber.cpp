/*
 * Arrange given numbers to form the biggest number
 */

#include <iostream>
#include <algorithm>
#include <string>
#include <vector>

using namespace std;

int customComparator(string, string);

int customComparator(string x, string y)
{
	string xy = x.append(y);
	string yx = y.append(x);
	int flag = 0;

	if(xy.compare(yx) > 0)
	{
		flag = 1;
	}
	else
	{
		flag = 0;
	}

	return flag;
}

int main()
{
	vector<string> inputElements(0);
	vector<string>::iterator itr = inputElements.begin();
	string biggestNumber("\0");

	inputElements.push_back("54");
	inputElements.push_back("546");
	inputElements.push_back("548");
	inputElements.push_back("60");

	/*
	 * inputElements.push_back("1");
	 * inputElements.push_back("34");
	 * inputElements.push_back("3");
	 * inputElements.push_back("98");
	 * inputElements.push_back("9");
	 * inputElements.push_back("76");
	 * inputElements.push_back("45");
	 * inputElements.push_back("4");
	 */
	
	/*
	 * inputElements.push_back("7");
	 * inputElements.push_back("776");
	 * inputElements.push_back("7");
	 * inputElements.push_back("7");
	 */
	
	sort(inputElements.begin(), inputElements.end(), customComparator);
	itr = inputElements.begin();
	for(; itr != inputElements.end(); itr++)
	{
		biggestNumber.append(*itr);
	}
	cout<<"\nBiggest number = "<<biggestNumber;
	
	return 0;
}
