#include <bits/stdc++.h>

using namespace std;
using ull = long long int;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<int> a(n);
        int mx = 0;
        for (auto &it: a) {
            cin >> it;
            mx = max(it, mx);
        }

        int idx = -1;
        for (int i = 0; i < n; i++) {
            if (a[i] != mx) continue;
            if (i > 0 && a[i -1] != mx) {
                idx = i + 1;
                break;
            }
            if (i < n - 1 && a[i + 1] != mx) {
                idx = i + 1;
                break;
            }
        }
        cout << idx << "\n";
    }

    return 0;
}