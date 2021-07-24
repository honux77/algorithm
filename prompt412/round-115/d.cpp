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


i64 c[61][61];

i64 ncr(int n, int r) {
    if (c[n][r]) return c[n][r];
    if (n == r || r == 0 || n == 0) {
        c[n][r] = 1;
        return 1;
    }
    c[n][r] = ncr(n - 1, r - 1) + ncr(n - 1 , r);
    return c[n][r];
}

 i64 gcd(i64 a, i64 b) {
    while (b != 0) {
        i64 t = a % b;
        a = b;
        b = t;
    }
    return a;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int t;
    cin >> t;
    while (t--) {
        int n, m;
        cin >> n >> m;
        i64 p = ncr(n + m, n);
        i64 s = 0;
        for (int i = n + m - 1; i >= 0; i -= 2) {
            s += ncr(i, n - 1);
        }
        i64 g = gcd(s, p);
        cout << s / g << "/" << p / g << "\n";
    }
    return 0;
}
