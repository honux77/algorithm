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
    
    int n, m;
    cin >> n >> m;
    vector<bool> r(n);
    vector<bool> c(m);

    for (int i = 0; i < n ; i++) {
        for (int j = 0; j < m; j++) {
            char t;
            cin >> t;
            if (t == 'X') {
              r[i] = true;
              c[j] = true;  
            }            
        }
    }

    int rc = 0, cc = 0;
    for (auto b: r) {
        if (!b) rc++;
    }
    for (auto b: c) {
        if (!b) cc++;
    }
    cout << max(rc, cc) << endl;
}