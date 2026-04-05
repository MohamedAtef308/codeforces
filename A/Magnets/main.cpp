#include <iostream>
using std::cin;
using std::cout;
using std::string;

int main() {
    int n, toggles = 1;
    string str, curr;
    cin >> n;
    cin >> str;

    for (int i=0; i<n - 1; ++i ) {
        cin >> curr;
        
        if (curr != str) {
            ++toggles;
        }

        str = curr;
    }

    cout << toggles;

    return 0;
}