#include <cstdio>
#include <iostream>
#include <vector>
#include <algorithm>
#include <queue>

using namespace std;
using i64 = long long int;
using ii = pair<int, int>;
using ii64 = pair<i64, i64>;

struct info {
    int to;
    int weight;
    bool operator < (const info & o) const {
        return weight > o.weight;
    }
};

vector<info> adj[20001];
int d[20001];
const int INF = 987654321;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int n, e, s;
    cin >> n >> e >> s;

    for (int i = 0; i < e; i++) {
        int u, v, w;
        cin >> u >> v >> w;
        adj[u].push_back({v, w});
    }

    for (int i = 1; i <= n; i++) {
        d[i] = INF;
    }
    
    priority_queue<info> q;

    d[s] = 0;
    q.push({s, 0});

    while (!q.empty()) {
        auto curr = q.top();
        q.pop();

        if (curr.weight > d[curr.to]) continue;

        for (auto nxt: adj[curr.to]) {

            if (d[nxt.to] > d[curr.to] + nxt.weight) {
                d[nxt.to] = d[curr.to] + nxt.weight;
                q.push({nxt.to, d[nxt.to]});
            }
        }
    }

    for (int i = 1; i <= n; i++) {
        if (d[i] == INF) cout << "INF\n";
        else cout << d[i] << "\n";
    }
    return 0;
}
