/* Is Unique: Implement an algorithm to determine
if a string has all unique characters. What if you
cannot use additional data structure? */

#include <stdio.h>


using namespace std;

bool isUnique(string str)
{
  bool ret = false;
  
  //In case of ASCII, any string longer than 128 character must have repeatition
  if(str.length() > 128)
    return ret;
  else
  {
    int[128] numCharacters;
    for(int it = 0; it < str.length(); it++)
    {
      int count = numCharacter[(int)str.getCharAt(it)]++;
      if(count > 1)
        return ret;
    }
    ret = true;
  }
 
  return ret;
}

void main(int argc, char* argv[])
{
  if(argc > 1)
    string str = argv[1];
  bool ret = isUnique(str);
  cout << "String is " << ret ? "" : "not" << " unique";
}
