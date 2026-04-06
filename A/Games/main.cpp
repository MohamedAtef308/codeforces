#include <iostream>
#include <vector>
using std::cin;
using std::cout;

int main()
{
    int n, count = 0;
    cin >> n;

    std::vector<int> home(n);
    std::vector<int> away(n);

    for (int i = 0; i < n; ++i)
    {
        cin >> home[i] >> away[i];
    }

    for (const auto &i : home)
    {
        for (const auto &j : away)
        {
            if (i == j)
            {
                ++count;
            }
        }
    }

    cout << count;

    return 0;
}