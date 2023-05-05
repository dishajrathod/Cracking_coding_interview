/* Is Unique: Implement an algorithm to determine
if a string has all unique characters. What if you
cannot use additional data structure? */
/* time complexity O(n) - size n string, O(1) time complexity for character set 128(fixed)
space complexity is O(1) -  additional DS is only 128 int long(fixed)
over all time and space complexity O(c) for all fixed size character set of size c */


#include <stdio.h>
#include <string>
#include <iostream>

#define CHARSETSIZE 128

using namespace std;

bool isUnique(string str)
{
	bool ret = false;

	//In case of ASCII, any string longer than 128 character must have repeatition
	if (str.length() > 128)
		return ret;
	else
	{
		int* numCharacters = (int*)malloc(CHARSETSIZE * sizeof(int));
		for (int i = 0; i < CHARSETSIZE; i++)
		{
			numCharacters[i] = 0;
		}
		for (int it = 0; it < str.length(); it++)
		{
			int count = ++numCharacters[(int)str[it]];
			if (count > 1)
				return ret;
		}
		ret = true;
	}

	return ret;
}

int main(int argc, char* argv[])
{
	string str;
	if (argc > 1)
	{
		str = argv[1];
	}
		
	bool ret = isUnique(str);
	cout << "String is" << (ret ? "" : " not") << " unique";
	return 0;
}
