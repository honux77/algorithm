#include <stdio.h>
#include <string.h>
#include <math.h>
#include <assert.h>
#include <math.h>
#include <vector>
#include <queue>
#include <algorithm>
#include <iostream>
#include <string>
#include <bitset>
#include <map>
#include <set>
#include <tuple>
#include <random>
#include <functional>

#define all(x) (x).begin(), (x).end()
#define xx first
#define yy second

using namespace std;

template<typename T, typename Pr = less<T>>
using pq = priority_queue<T, vector<T>, Pr>;
using i64 = long long int;
using ii = pair<int, int>;
using ii64 = pair<i64, i64>;

void solve() {
    int n, k;
    cin >> n >> k;
    vector<int> a(n);
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }

    sort(all(a));
    vector<int> cnt = {1};
    for (int i = 1; i < n; i++) {
        if (a[i] == a[i - 1]) {
            cnt.back()++;
        } else {
            cnt.emplace_back(1);
        }
    }

    sort(all(cnt));

    int m = cnt.size();
    for (int i = 0; i < m - 1; i++) {
        if (cnt[i] > k) {
            cout << m - i << "\n";
            return;
        }
        k -= cnt[i];
    }
    cout << 1 << "\n";    
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int t = 1;
    cin >> t;
    while (t--) {
        solve();
    }       
}
