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

i64 a[300005];
i64 p[300005];
i64 ans;

void dfs(int emp, i64 cost) {
    cost += a[emp];
    ans = min(ans, cost);
    if (emp == 1) return;
    dfs(p[emp], cost);
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int n;
    cin >> n;

    for (int i = 1;  i <= n; i++) {
        cin >> a[i];
    }

    for (int i = 2;  i <= n; i++) {
        cin >> p[i];
    }

    ans = a[1];
    for (int i = 2; i <= n; i++) {
        dfs(i, 0);
    }

    cout << ans << endl;
    return 0;
}
