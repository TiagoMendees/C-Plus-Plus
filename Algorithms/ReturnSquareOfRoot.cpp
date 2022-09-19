#include <iostream>
#include <math.h>
#include <string>
#include <cstring>


class Solution {
public:
    int mySqrt(int x) {
      int sqrtnum = sqrt(x);

      int res = std::round(sqrtnum);

      return res;

    }
};