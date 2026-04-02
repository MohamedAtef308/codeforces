#include <iostream>
using std::cin;
using std::cout;

int main()
{
    int n, s = 0;
    char c;

    cin >> n;

    for (int i = 0; i < n; ++i)
    {
        cin >> c;
        switch (c)
        {
        case 'A':
            ++s;
            break;
        case 'D':
            --s;
            break;
        }
    }

    if (s > 0)
    {
        cout << "Anton";
    }
    else if (s == 0)
    {
        cout << "Friendship";
    }
    else
    {
        cout << "Danik";
    }

    return 0;
}