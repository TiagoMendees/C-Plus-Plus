#include <iostream>
using namespace std;
class Solution {
public:
    int smallestEvenMultiple(int n) {
        bool DoesFoundNum = false;
        int currentNum = 1;
        while (DoesFoundNum != true)
            if (currentNum % n == 0 && currentNum % 2 == 0)
                DoesFoundNum = true;
                currentNum++;
        return currentNum;
    }
};
int main() {
    Solution SL;
    cout << SL.smallestEvenMultiple(5) << endl;
    return 0;
}
