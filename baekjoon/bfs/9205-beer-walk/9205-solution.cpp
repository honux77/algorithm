#include <cstdio>
#include <iostream>
#include <vector>
#include <utility>
#include <algorithm>
#include <queue>

using namespace std;
using ull = long long int;

bool canWalk(pair<int,int> &a, pair<int,int> &b) {
    return abs(a.first - b.first) + abs(a.second - b.second) <= 1000;
}

void bfs(vector<pair<int,int>> &a) {
    vector<bool> visited(a.size());
    queue <int> q;
    q.push(0);

    while(!q.empty()) {
        int curr = q.front();
        q.pop();
        visited[curr] = true;
        for (int i = 1; i < a.size(); i++) {
            if (!visited[i] && canWalk(a[curr], a[i])) {
                if (i == a.size() - 1) {
                    cout << "happy\n";
                    return;
                }
                q.push(i);
            }
        }
    }
    cout << "sad\n";
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        
        vector<pair<int, int>> a(n + 2);

        for (int i = 0; i < n + 2; i++) {
            cin >> a[i].first >> a[i].second;       
        }

        bfs(a);        
    };
    
    return 0;
}