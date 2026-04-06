#include <iostream>
#include <vector>
using std::cin;
using std::cout;
using std::string;
using std::vector;

int main()
{
    int n, ser = 0, dim = 0, curr;
    cin >> n;

    vector<int> h(n);

    for (int i = 0; i < n; ++i)
    {
        cin >> h[i];
    }

    int left = 0, right = n - 1;

    for (int i = 0; i < n; ++i)
    {
        if (h[left] > h[right])
        {
            curr = h[left++];
        }
        else
        {
            curr = h[right--];
        }

        if (i % 2 == 0)
        {
            ser += curr;
        }
        else
        {
            dim += curr;
        }
    }

    cout << ser << ' ' << dim;

    return 0;
}