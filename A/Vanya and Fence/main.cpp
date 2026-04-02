#include <iostream>
using std::cin;
using std::cout;

int main()
{
    int n, h;
    cin >> n >> h;

    int w = 0;
    int a;

    for (int i = 0; i < n; ++i)
    {
        cin >> a;
        ++w;
        if (a > h)
        {
            ++w;
        }
    }

    cout << w;

    return 0;
};