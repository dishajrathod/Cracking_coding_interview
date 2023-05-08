/* Character set is unfixed(unicode), we may have to compare every single
character with the other to make sure uniqueness. Real world is often messy 
and not everyone speaks English so we take our time*/
TC is O(n^2) ~ n(n+1)/2
SC is O(1) */

#include <iostream>
#include <string>

using namespace std;

bool isUnique(wstring str)
{
	bool ret = true;

	for (int it = 0; it < str.length(); it++)
	{
		for (int jt = it + 1; jt < str.length(); jt++)
		{
			auto f = str.at(it);
			auto j = str.at(jt);
			if (str.at(it) == str.at(jt))
			{
				//return as soon as 1st match found
				return false;
			}
		}
	}

	return ret;
}

int wmain(int argc, wchar_t* argv[])
{
	wstring str;
	if (argc > 1)
	{
		str = argv[1];
	}

	bool ret = isUnique(str);
	cout << "String is " << (ret ? "" : "not ") << "unique";
	return 0;
}
