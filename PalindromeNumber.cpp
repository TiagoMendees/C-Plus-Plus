#include <iostream>
#include <vector>
#include <string>
#include <cstring>

using namespace std;

class Solution {
public:
    bool isPalindrome(int x) {
      
      string XStr = to_string(x);

      string rev = string(XStr.rbegin(), XStr.rend());
 
      if (XStr == rev)
        return true;
        return false;
      
    }
};