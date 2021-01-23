#include <cstdio>
#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;
using i64 = long long int;
using ii = pair<int, int>;
using ii64 = pair<i64, i64>;

vector<int> edge[10001];
int vcount = 0;

void dfs(int s, vector<bool> &visit) {    
    vcount++;
    visit[s] = true;
    for(auto nxt: edge[s]) {
        if (!visit[nxt])
            dfs(nxt, visit);
    }
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, e;
    cin >> n >> e;
    for (int i = 0; i < e; i++) {
        int v1, v2;
        cin >> v2 >> v1;

        edge[v1].push_back(v2);
    }

    int ans = 0;
    vector <int> result(n + 1);
    for(int i = 1; i <= n; i++) {
        vector<bool> visit(n + 1);
        vcount = 0;
        dfs(i, visit);
        result[i] = vcount;        
    }

    int maxv = 0;
    for (int i = 1; i <= n; i++) {
        //cout << result[i] << "\n";
        maxv = max(maxv, result[i]);
    }

    for (int i = 1; i <= n; i++) {
        if (maxv == result[i])
            cout << i << " ";        
    }
    cout << endl;    
    return 0;
}