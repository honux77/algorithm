#include <cstdio>
#include <cstring>
#include <iostream>
#include <queue>
#include <algorithm>

using namespace std;
using ull = long long int;

int a[101][101];
int d[101];

int bfs(int s, int n) {
    queue<int> q;
    memset(d, 0, sizeof(d));

    q.push(s);
    int ans = 0;

    while (!q.empty()) {
        int c = q.front();
        q.pop();        
        ans += d[c];        
        
        for(int i = 1; i <= n; i++) {    
            if (d[i] || i == s) continue;        
            if (a[c][i]) {
                d[i] = d[c] + 1;
                q.push(i);
            }
        }        
    }
    return ans;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int n, m;
    cin >> n >> m;

    for (int i = 0; i < m; i++) {
        int u, v;
        cin >> u >> v;
        a[u][v] = a[v][u] = true;
    }

    int minv = 20000;
    int vidx = 1;
    for (int i = 1; i <= n; i++) {
        int v = bfs(i, n);
        if (v < minv) {
            minv = v;
            vidx = i;
        }
    }
    cout << vidx << "\n";
    return 0;
}