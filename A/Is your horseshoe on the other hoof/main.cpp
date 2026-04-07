#include <iostream>
#include <set>

int main()
{
    std::set<int> s;
    int in;

    for (int i = 0; i < 4; ++i)
    {
        std::cin >> in;
        s.insert(in);
    }

    std::cout << 4 - s.size();

    return 0;
}