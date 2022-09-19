#include <iostream>
#include <vector>
#include <string>

using namespace std;

class Solution {
public:
    void reverseString(vector<char>& s) {

        vector<char> res;

        for (int i = 0; i < s.size(); i++)
        {
            res.insert(res.begin(),s[i]);
        }

        s = res;
        

    }
};