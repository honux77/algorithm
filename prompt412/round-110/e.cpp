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

i64 ans;
bool f = false;
void dfs(i64 curr, i64 spd, i64 n) {
    if (f) return;
    //cout << curr << " " << spd << " " << n << endl;
    if (n == 0 && spd == 1) {
        f = true;
        ans = min(ans, curr);
        //cout << "find: " << ans << endl;
        return;
    }
    curr++;
    n -= spd;
    if (n < 0 || curr >= ans) return;
    dfs(curr, spd * 3, n);
    dfs(curr, spd, n);
    if (spd / 3 >= 1) dfs(curr, spd / 3, n);
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    
    i64 n;
    cin >> n;
    ans = n;
    dfs(0, 1, n);
    cout << ans << endl;
    return 0;
}
