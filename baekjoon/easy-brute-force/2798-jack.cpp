#include <cstdio>
#include <iostream>
#include <vector>

using namespace std;
using i64 = long long int;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int n, m;
    cin >> n >> m;
    vector<int> a(n);
    for (int i = 0; i < n; i++) {
        cin >> a[i]; 
    } 

    int ans = 0;
    for (int i = 0; i < n - 2; i++) {
        for (int j = i + 1; j < n - 1; j++) {
            for (int k = j + 1; k < n; k++) {
                int s = a[i] + a[j] + a[k];
                if (s <= m) {
                    ans = max(s, ans);
                    if (ans == m) {
                        cout << ans << endl;
                        return 0;
                    }
                }
            }
        }
    }

    cout << ans << endl;
    return 0;
}