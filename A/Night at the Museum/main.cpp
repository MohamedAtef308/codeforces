#include <iostream>
using std::cin;
using std::cout;
using std::string;

int main()
{
    string str;
    cin >> str;

    char curr = 'a';
    int total = 0, right, left;

    for (int i = 0; i < str.size(); ++i)
    {
        right = std::abs(str[i] - curr);
        left = 26 - right;
        total += std::min(right, left);
        curr = str[i];
    }

    cout << total;

    return 0;
}