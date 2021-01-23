#include <cstdio>
#include <iostream>
#include <vector>
#include <algorithm>
#include <queue>

using namespace std;
using i64 = long long int;
using ii = pair<int, int>;
using ii64 = pair<i64, i64>;

int bfs(int s, int n, vector<vector<int>> &edge, vector<bool> &visit) {    
    queue<int> q;    
    q.push(s);

    while(!q.empty()) {
        auto v = q.front();
        q.pop();        
        if(visit[v]) return 1;
        visit[v] = true;

        for (auto nxt: edge[v]) {
            q.push(nxt);
        }
    }
    return 0;
}

void solve() {
    int n; 
    cin >> n;
    int cycle = 0;
    vector<vector<int>> edge(n + 1);
    vector<bool> visit(n + 1);
    for (int i = 1; i <= n; i++) {
        int v;
        cin >> v;
        if (i == v) cycle++;
        else edge[i].push_back(v);    
    }

    for (int i = 1; i <= n; i++) {
        if (visit[i]) continue;
        cycle += bfs(i, n, edge, visit);
    }
    cout << cycle << "\n";
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    
    return 0;
}