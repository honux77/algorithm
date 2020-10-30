#include <cstdio>
#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;
using ull = long long int;

bool dominant(vector<int> &a, int i) {
    int v = a[i];
    int l = i - 1;
    int r = i + 1;
    while (l >= 0 || r < a.size()) {
        if (l >= 0 && a[l] < v) {
            v++;
            l--;
        } else if (r < a.size() && a[r] < v) {
            v++;
            r++;
        } else {
            return false;
        }
    }
    return true;
}

void solve() {
    int n;
    cin >> n;
    vector<int> b(n);
    int mx = 0;
    for (auto &p : b) {
        cin >> p;
        mx = max(mx, p);
    }

    for (int i = 0; i < n; i++) {
        bool find = false;
        if (b[i] == mx) find = dominant(b, i);
        if (find) {
            cout << i + 1<< "\n";
            return;
        }
    }
    cout << "-1\n";
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int t;
    cin >> t;
    while (t--) 
        solve();
    return 0;
}
