#include <cstdio>
#include <iostream>
#include <vector>
#include <algorithm>
#include <map>

using namespace std;
using ull = long long int;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int n;
    cin >> n;

    vector<int> a(n);

    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    
    vector<int> b(a);
    sort(b.begin(), b.end());
    map<int, int> m;

    for (int i = 0; i < n; i++) {
        if (m.find(b[i]) == m.end()) continue;
        m[b[i]] = i;
    }
    

    for (auto &i: a) {        
        cout << m[i] << " ";

    }
    cout << "\n";

    return 0;
}
