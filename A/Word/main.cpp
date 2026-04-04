#include <iostream>
#include <cctype>
#include <algorithm>
using std::cout;
using std::cin;
using std::string;

int main() {
    string in;
    cin >> in;
    int low_count = 0;
    char curr;
    
    for(int i =0; i< in.size(); ++i) {
        curr = in[i];
        if (curr >= 'a')
        {
            ++low_count;
        }
    }

    if (low_count >= in.size() / 2.0)
    {
        std::transform(in.begin(), in.end(), in.begin(),
                       [](unsigned char c){ return std::tolower(c); }
                      );
    } else {
        std::transform(in.begin(), in.end(), in.begin(),
                       [](unsigned char c){ return std::toupper(c); }
                      );
    }

    cout<< in;

    return 0;
}