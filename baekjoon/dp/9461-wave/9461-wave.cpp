#include <cstdio>
#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;
using ull = unsigned long long;


int main()
{    
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    vector<ull> a = {1, 1, 1};
    for (ull i = 3; i < 100; i++) {
      a.push_back(a[i - 3] +  a[i - 2]);
    }    

    ull t;
    cin >> t;    
    while (t--) {
        ull n;
        cin >> n;
        cout << a[n - 1] << "\n";
    };
    
    return 0;
}