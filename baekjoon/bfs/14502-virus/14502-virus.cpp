#include <cstdio>
#include <iostream>
#include <vector>
#include <algorithm>
#include <queue>

using namespace std;
using ull = long long int;


vector<int> buf;

int bfs(vector<vector<int>> a, int n, int m) {
    queue<pair<int,int>> q;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {       
            if (a[i][j] == 2) {
                q.push({i + 1, j});
                q.push({i - 1, j});
                q.push({i, j + 1});
                q.push({i, j - 1});            
            }
        }
    }  

    while(!q.empty()) {
        auto curr = q.front();        
        q.pop();
        int r =  curr.first;
        int c = curr.second;
        if (r >= 0 && r < n && c >= 0 && c < m && a[r][c] == 0) {    
            a[r][c] = 2;    
            q.push({r, c + 1});
            q.push({r, c - 1});
            q.push({r + 1, c});
            q.push({r - 1, c});          
        }
    }

    int c = 0;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {       
            if (a[i][j] == 0) c++;
        }
    }
    return c;
}

void combination(vector<vector<int>>& r, vector<int> &a, int n, int c) {
    if (c == 0) {
        r.push_back(buf);      
        return;
    }

    for (int i = n; i <= a.size() - c; i++) {
        buf.push_back(a[i]);
        combination(r, a, i + 1, c - 1);
        buf.pop_back();
    }
}
    

vector<vector<int>> combinations(int n, int c) {
    vector<int> a;
    for (int i = 0; i < n; i++) {
        a.push_back(i);
    }

    vector<vector<int>> r;
    combination(r, a, 0, c);
    return r;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    vector<pair<int, int>> e;
    vector<vector<int>> a(8);

    int n, m;
    cin >> n >> m;
    for (int i = 0; i < n; i++) {
        a[i] = vector<int>(8);
        for (int j = 0; j < m; j++) {
            cin >> a[i][j];
            if (a[i][j] == 0) e.push_back({i, j});
        }
    }

    vector<vector<int>> seq = combinations(e.size(), 3);
    int ans = 0;

    for (auto &v: seq) {
        for (auto p: v) {
            a[e[p].first][e[p].second] = 1;    
        }           
        ans = max(ans, bfs(a, n, m));        
        for (auto p: v) {
            a[e[p].first][e[p].second] = 0;    
        }        
    }

    cout << ans << endl;

    return 0;
}