#include <iostream>

int solution(int number) 
{
    int res = 0;
    for (int i = 0; i < number; i++)
    {
        if (i % 5 == 0 || i % 3 == 0)
            res+=i;
    }
    return res;
}
int main() {
    std::cout << solution(10) << std::endl;
    return 0;
}

