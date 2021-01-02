#include <cstdio>
#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;
using ull = long long int;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    
    vector<int> a = {1,2, 3};
    int n = 10;
    auto &a1 = a;
    auto &a2 = n;
    
    //modify
    a1.push_back(4);
    a2 = 20;
    
    for (auto i: a) {
        cout << i << " ";
    }    
    cout << endl << n << endl;
    return 0;
}