//https://www.acmicpc.net/problem/16122

#include <iostream>
#include <vector>
#include <map>

#define INF 998244353
using ll = long long;

using namespace std;
vector<map<int, ll>> d;
int n, m;

inline map<int, ll>::iterator get(int r, int c)
{
    return d[r].find(c);
}

inline void set(int r, int c, ll v)
{
    d[r][c] = v;
}

ll solve(int n, int m)
{
    if (get(n, m) == d[n].end())
    {
        ll v = (solve(n - 1, -m) + solve(n - 1, -m - 1)) % INF;
        set(n, m, v);
    }
    return get(n, m)->second;
};

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    cin >> n >> m;

    d.resize(n + 1);

    for (int i = -n; i <= n; i++)
    {
        set(0, i, 0);
    }
    set(0, 0, 1);
    ll ans = solve(n, m);
    cout << ans << endl;
    return 0;
}
