#include <iostream>
using std::cin;
using std::cout;

int main()
{
    int a, b, min = 10, change;
    cin >> a >> b;

    for (int i = 1; i < 10; ++i)
    {
        change = (i * a) % 10;
        if ((change == 0 || change == b) && i < min)
        {
            min = i;
        }
    }

    cout << min;
    return 0;
}