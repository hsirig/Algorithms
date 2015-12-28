/*
 * Return maximum occurring character in the input string
 */

#include <stdio.h>
#include <string.h>

#define MAX_SIZE 256

int main()
{
	char* inputString = "thisisateststring";
	int lenInputString = strlen(inputString);
	int characterFrequency[] = {0};
	int i = 0, maximumFrequency = 0;
	char maximumOccurringCharacter = '\0';

	for(; i < lenInputString; i++)
	{
		characterFrequency[*(inputString + i)]++;
		if(characterFrequency[*(inputString + i)] > maximumFrequency)
		{
			maximumFrequency = characterFrequency[*(inputString + i)];
			maximumOccurringCharacter = *(inputString + i);
		}
	}
	printf("\nThe maximum occurring character is - %c (%d times).", maximumOccurringCharacter, maximumFrequency);

	return 0;
}
