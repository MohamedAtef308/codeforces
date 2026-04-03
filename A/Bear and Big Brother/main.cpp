#include <iostream>
using std::cin;
using std::cout;

int main()
{
    int a, b, i = 0;

    cin >> a >> b;

    while (a <= b)
    {
        a = a * 3;
        b = b * 2;
        ++i;
    }

    cout << i;

    return 0;
}