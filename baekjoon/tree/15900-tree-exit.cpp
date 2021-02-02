#include <cstdio>
#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;
using i64 = long long int;
using ii = pair<int, int>;
using ii64 = pair<i64, i64>;

int lc = 0;
vector<int> edge[500005];
bool visited[500005];

void dfs(int s, int lv) {   
    //cerr << s << " " << lv << endl; 
    visited[s] = true;

    //leaf
    if (edge[s].size() == 1 && lv != 0) {
        lc += lv;
        return;
    }

    for (auto nxt: edge[s]) {
        if (!visited[nxt]) {
            dfs(nxt, lv + 1);
        }        
    }
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int n;
    cin >> n;
    for (int i = 0; i < n - 1; i++) {
        int u, v;
        cin >> u >> v;
        edge[u].push_back(v);
        edge[v].push_back(u);
    }

    dfs(1, 0);
    //cerr << lc << endl;
    if (lc % 2 == 0) cout << "No\n";
    else cout << "Yes\n";
    return 0;
}