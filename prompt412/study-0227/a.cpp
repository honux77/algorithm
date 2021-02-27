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
i64 d[300005];
vector <int> edge[300005];
i64 ans;

void dfs(int i) {
    if (i != 1)
        d[i] = min(d[p[i]] + a[i], a[i]);
         
    ans = min(d[i], ans);
    for(auto &i: edge[i]) {
        dfs(i);
    }
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int n;
    cin >> n;

    for (int i = 1;  i <= n; i++) 
        cin >> a[i];

    for (int i = 2;  i <= n; i++) 
        cin >> p[i];

    for (int i = 2;  i <= n; i++) 
        edge[p[i]].push_back(i);

    ans = d[1] = a[1];
    dfs(1);

    cout << ans << endl;
    return 0;
}
