//https://www.acmicpc.net/problem/16122

#include <iostream>
#include <vector>
#include <unordered_map>

#define INF 998244353

using namespace std;
vector<unordered_map<int, int>> d;
int n, m;

int get(int r, int c)
{
    if(r == 0 && c == 0) {
        return 1;
    } else if (r == 0 && c != 0) {
        return 0;
    }
    unordered_map<int, int>::iterator it = d[r].find(c);
    if(it == d[r].end()) {
        return -1;
    } else {
        return it->second;
    }
}

inline void set(int r, int c, int v)
{
    d[r][c] = v;
}

int solve(int n, int m)
{
    int v = get(n, m);
    if (v == -1) 
    {
        v = (solve(n - 1, -m) + solve(n - 1, -m - 1)) % INF;
        set(n, m, v);
    }
    return v;
};

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    cin >> n >> m;
    d.resize(n + 1);
    int ans = solve(n, m);
    cout << ans << endl;
    return 0;
}
