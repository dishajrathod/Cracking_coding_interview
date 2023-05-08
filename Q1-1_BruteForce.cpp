/* Character set is unfixed(unicode), we may have to compare every single
character with the other to make sure uniqueness.
TC is O(n^2)
SC is O(1) */

include <iostream>
include <string>

using namespace std;

bool isUnique(string str)
{
  bool ret = false;
  
  for(int it = 0; it < str.length(); it++)
  {
  }
  
  return ret;
}

int main(int argc, char* argv[])
{
  if(argc > 1)
  {
    string str = argv[1];
  }
  
  bool ret = isUnique(str);
  cout << "String is" << (ret ? "" : " not ") << "unique"
  return 0;
}
