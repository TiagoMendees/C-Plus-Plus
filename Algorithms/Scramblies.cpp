#include<string>
#include <algorithm>
#include <cstring>
#include <iostream>

bool scramble(std::string s1, std::string s2){

    std::sort(begin(s1),end(s1));
    std::sort(begin(s2),end(s2));
    return std::includes(begin(s1),end(s1),begin(s2),end(s2));
}

int main() {

    std::cout << scramble("rkqodlw", "world") << std::endl;

    return 0;
}