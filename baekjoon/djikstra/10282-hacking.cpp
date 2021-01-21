#include <cstdio>
#include <iostream>
#include <vector>
#include <algorithm>
#include <queue>

using namespace std;
using i64 = long long int;
using ii = pair<int, int>;
using ii64 = pair<i64, i64>;

const int INF = 987654321;

void dk() {
    int n, e, s;
    cin >> n >> e >> s;
    vector<vector<ii>> edge(n + 1);
    vector<int> d(n + 1);    
    fill(d.begin(), d.end(), INF);
    vector<bool> visited(n + 1);

    for (int i = 0; i < e; i++) {
        int u, v, w;
        cin >> u >> v >> w;
        edge[v].push_back({w, u});
    }

    d[s] = 0;
    priority_queue<ii, vector<ii>, greater<ii>> q;
    q.emplace(0, s);

    while (!q.empty()) {
        int curr = q.top().second;
        int w1 = q.top().first;        
        q.pop();

        if (visited[curr]) continue;
        visited[curr] = true;

        for(auto &nx: edge[curr]) {
            int w2 = nx.first;
            int v2 = nx.second;
            if (d[v2] > w1 + w2) {
                d[v2] = w1 + w2;
                q.emplace(d[v2], v2);
            }
        }        
    }

    int count = 0;
    int time = 0;
    for (int i = 1; i <= n; i++) {
        if (d[i] != INF) {
            count++;
            time = max(time, d[i]);
        }
    }
    cout << count << " " << time << "\n";
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int t;
    cin >> t;

    while (t--) {
        dk();
    }   
    return 0;
}