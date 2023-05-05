/* Is Unique: Implement an algorithm to determine
if a string has all unique characters. What if you
cannot use additional data structure? */

#include <stdio.h>


using namespace std;

bool isUnique(string str)
{
  bool ret = false;
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

void main(int argc, char[] argv)
{
  
  bool ret = isUnique(str);
}
