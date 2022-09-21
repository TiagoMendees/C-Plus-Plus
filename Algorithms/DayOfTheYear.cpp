#include <vector>
#include <string>
#include <iostream>
#include <sstream>
using namespace std;
class Solution {
public:
    int dayOfYear(std::string date) {
        std::vector<char> ReversedDate;
        string res;
        int Answer;
        char dateChar[2];
        for (auto a:date)
        {
            ReversedDate.insert(ReversedDate.begin(),a);
        }
        for (auto z:ReversedDate)
        {
            if (z == '-')
            {
                dateChar[0] = ReversedDate[1];
                dateChar[1] = ReversedDate[0];
                res = dateChar;
                Answer = std::stoi(res);
                return Answer;     
            }
        }
        return 0;    
    }
};
int main() {
    Solution SL;
    cout << SL.dayOfYear("2019-01-19") << endl;
    return 0;
}