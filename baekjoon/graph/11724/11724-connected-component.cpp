#include <cstdio>
#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;
using ull = long long int;

bool a[1001][1001];
bool v[1001];

void dfs(int s, int n) {
    v[s] = true;

    for (int i = 1; i <= n; i++) {
        if (!v[i] && a[s][i]) {
            dfs(i, n);
        } 
    }
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int n, m;
    cin >> n >> m;
    int ans = 0;

    for (int i = 0; i < m; i++) {
        int s, e;
        cin >> s >> e;
        a[s][e] = a[e][s] = true;
    }

    for (int i = 1; i <= n; i++) {
        if (!v[i]) {
            ans++;
            dfs(i, n);
        }
    }    
    
    cout << ans << "\n";
    
    return 0;
}