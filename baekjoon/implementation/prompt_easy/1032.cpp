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
    
    int n;
    cin >> n;
    vector<string> a(n);
    string ans = "";

    for(int i = 0; i < n; i++) {
        cin >> a[i];        
    }

    for(int idx = 0; idx < a[0].length(); idx++) {
        bool same = true;
        for (int i = 0; i < n; i++) {
            if (a[0][idx] != a[i][idx]) {
                ans += "?";
                same = false;
                break;
            }
        }
        if (same) ans += a[0][idx];        
    }
        
    cout << ans << "\n";
    
    return 0;
}