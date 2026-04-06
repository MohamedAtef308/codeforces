#include <iostream>
#include <vector>
using std::cin;
using std::cout;
using std::string;

int main()
{
    std::vector<int> vec(4);
    string str;
    int sum = 0;

    for (int i = 0; i < vec.size(); ++i)
    {
        cin >> vec[i];
    }

    cin >> str;

    for (int i = 0; i < str.size(); ++i)
    {
        sum += vec[(str[i] - '0') - 1];
    }

    cout << sum;

    return 0;
}