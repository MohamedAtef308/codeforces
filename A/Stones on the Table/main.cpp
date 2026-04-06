#include <iostream>
using std::cin;
using std::cout;

int main()
{
    int changes = 0;
    std::string str;

    cin >> str;
    cin >> str;

    for (int i = 0; i < str.size() - 1; ++i)
    {
        if (str[i] == str[i + 1])
        {
            ++changes;
        }
    }

    cout << changes;

    return 0;
}