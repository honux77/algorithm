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

vector<ii64> a;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int n;
    cin >> n;
    
    for(int i = 0; i < n; i++) {
        int p;
        int c;
        cin >> p >> c;
        a.push_back({p, c});
    }

    int ans = 0;

    for (int i = 0; i < n; i++) {
        bool ok = true;
        auto [p1 , c1] = a[i];
        for (int j = 0; j < n; j++) {
            auto [p2, c2] = a[j];
            if (p1 < p2 && c1 > c2) {
                ok = false;
                break;
            }
        }
        if (ok)
            ans++;
    }
    cout << ans << endl;
    return 0;
}
