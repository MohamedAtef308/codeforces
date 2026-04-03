#include <iostream>
using std::cin;
using std::cout;

int main()
{
    int result, a;
    bool found = false;

    for (int i = 0; i < 5; ++i)
    {
        for (int j = 0; j < 5; ++j)
        {
            cin >> a;
            if (!found && a == 1)
            {
                result = abs(2 - i) + abs(2 - j);
                found = true;
            }
        }
    }

    cout << result;

    return 0;
}