#include <iostream>
#include <algorithm>
using std::string;
using std::cout;
using std::cin;

string str_toupper(string s)
{
    transform(s.begin(), s.end(), s.begin(),
                   [](unsigned char c){ return toupper(c); }
                  );
    return s;
}

int main() {
    string str1, str2;
    cin>> str1 >> str2;
    str1 = str_toupper(str1);
    str2 = str_toupper(str2);

    if (str1 == str2)
    {
        cout<< 0;
    }
    else if (str1 < str2)
    {
        cout << -1;
    }
    else
    {
        cout << 1;
    }

    return 0;
}