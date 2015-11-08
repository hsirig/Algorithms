/*
 * Return anagrams in a collection of strings
 */

#include <iostream>
#include <algorithm>
#include <map>
#include <string>
#include <array>

using namespace std;

int main()
{
	vector<string> inputStrings = {"hamlet","dirtyroom", "pour", "utensil", "drop", "makefile", "dormitory", "pear", "reap", "listen", "tensil", "items"};
	map<string, vector<string>> anagramMap;
	vector<string>::iterator vectorItr = inputStrings.begin();
	vector<string>::iterator tempItr = inputStrings.begin();
	string tempString = "\0";

	sort(inputStrings.begin(), inputStrings.end());
	while(vectorItr != inputStrings.end())
	{
		tempString = *vectorItr;
		sort(tempString.begin(), tempString.end());
		anagramMap[tempString].push_back(*vectorItr);
		vectorItr++;
	}
	vectorItr = inputStrings.begin();
	while(vectorItr != inputStrings.end())
	{
		tempString = *vectorItr;
		sort(tempString.begin(), tempString.end());
		if((anagramMap.find(tempString) != anagramMap.end()) && (anagramMap[tempString].size() > 1))
		{
			tempItr = anagramMap[tempString].begin();
			while(tempItr != anagramMap[tempString].end())
			{
				cout<<*tempItr<<"\t";
				tempItr++;
			}
			cout<<"\n";
		}
		anagramMap.erase(tempString);
		vectorItr++;
	}

	return 0;
}
