#include <cstdio>
#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;
using ull = long long int;

void solve() {
    int n;
    cin >> n;
    
    vector<int> b(n);    

    for (int i = 0; i < n; i++) 
        cin >> b[i];    
    
    int ans = 0;

    for (auto c: b) {
        if (c == 0) ans++;
    }

    for(int i = 0; b[i] == 0; i++) {
        ans--;
    }

    for(int i = b.size() - 1; b[i] == 0; i--) {
        ans--;
    }

    cout << ans << "\n";

}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int n;
    cin >> n;
    for (int i = 0; i < n; i++) 
        solve();
    return 0;
}