#include <iostream>
#include <vector>
#include <algorithm>
using std::cout;
using std::cin;
using std::vector;

int main() {
    int n;
    cin >>n;

    vector<int> vec(n);

    for (int i=0; i< n; i++)
    {
        cin>> vec[i];
    }

    std::sort(vec.begin(), vec.end());

    for(int i=0; i< n; i++)
    {
        cout<< vec[i]<<' ';
    }

    return 0;
}