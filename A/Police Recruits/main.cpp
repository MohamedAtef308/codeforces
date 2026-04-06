#include <iostream>
using std::cin;
using std::cout;

int main()
{
    int n, police = 0, in, crime = 0;

    cin >> n;

    for (int i = 0; i < n; ++i)
    {
        cin >> in;

        if (in > 0)
        {
            police += in;
        }
        if (in < 0)
        {
            if (police == 0)
            {
                ++crime;
            }
            police = std::max(police + in, 0);
        }
    }

    cout << crime;

    return 0;
}