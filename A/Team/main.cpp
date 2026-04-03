#include <iostream>
using std::cin;
using std::cout;

int main()
{
    int n, a, b, c, sum = 0;
    cin >> n;

    for (int i = 0; i < n; ++i)
    {
        cin >> a >> b >> c;

        if (a + b + c >= 2)
        {
            ++sum;
        }
    }

    cout << sum;

    return 0;
}