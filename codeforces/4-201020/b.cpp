#include <cstdio>
#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;
using ull = long long int;

void trim(vector<int> &b) {    
    while(b.size() != 0 && b[0] == 0) {
        b.erase(b.begin());
    }    
    while(b.size() != 0 && b.back() == 0) {
        b.pop_back();
    }    
}

void solve() {
    int n;
    cin >> n;
    
    vector<int> b(n);    

    for (int i = 0; i < n; i++) {
        cin >> b[i];
    }

    trim(b);
    
    int ans = 0;

    for (auto c: b) {
        if (c == 0) ans++;
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