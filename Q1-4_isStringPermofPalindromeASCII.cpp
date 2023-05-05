/* Q1.4 Given a string, write a function to check if it is a 
permutation of a palindrome. A palindrome is a word or phrase that
is the same forwards and backwards. A permutation is a 
rearrangement of letters. The palindrome doe snot need to be limited
to just dictionary words.*/
/* space in command line means they are considered mulitple arguments, have to fix this*/
/* assuming input string is ASCII */
/* TC O(n) - n is length of string - gets through the string twice so 2n time
SC O(c) - c is size of character set*/

#include <iostream>
#include <string>

#define CHARSETSIZE 128

using namespace std;

bool isPermutationOfPalindrome(string str)
{
	bool ret = true;
	bool flagOddFound = false;

	//initialize numCharacter array 0
	int* numCharacters = (int*)malloc(CHARSETSIZE * sizeof(int));
	for (int i = 0; i < CHARSETSIZE; i++)
	{
		numCharacters[i] = 0;
	}

	//count every character
	for (int i = 0; i < str.length(); i++)
	{
		numCharacters[str[i]]++;
	}

	//check for odd number of chracters, 1 is okay, more than 1 is not
	for (int i = 0; i < CHARSETSIZE; i++)
	{
		if (numCharacters[i] % 2 != 0)
		{
			if (flagOddFound)
			{
				ret = false;
				break;
			}	
			else
				flagOddFound = true;
		}
	}
	return ret;
}

int main(int argc, char* argv[])
{
	if (argc > 1)
	{
		bool ret = isPermutationOfPalindrome(argv[1]);
		cout << "String is " << (ret ? "" : "not ") << "a permutation of a palindrome";
	}
	return 0;
}
