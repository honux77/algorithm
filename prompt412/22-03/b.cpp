#include <stdio.h>
#include <string.h>
#include <math.h>
#include <assert.h>
#include <math.h>
#include <vector>
#include <queue>
#include <algorithm>
#include <iostream>
#include <string>
#include <bitset>
#include <map>
#include <set>
#include <tuple>
#include <random>
#include <functional>

#define all(x) (x).begin(), (x).end()
#define xx first
#define yy second

using namespace std;

template<typename T, typename Pr = less<T>>
using pq = priority_queue<T, vector<T>, Pr>;
using i64 = long long int;
using ii = pair<int, int>;
using ii64 = pair<i64, i64>;

vector <int> edge[100005];
int d[100005];

void dfs(int root) {
    if (edge[root].empty()) {
        d[root] = 1;
        return;
    }

    for (auto &e: edge[root]) {
        edge[e].erase(find(all(edge[e]), root));
        dfs(e);
        d[root] += d[e];
    }
    d[root]++;
}


int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int n, r, q;
    cin >> n >> r >> q;

    for(int i = 1; i < n; i++) {
        int u, v;
        cin >> u >> v;
        edge[u].push_back(v);
        edge[v].push_back(u);
    }

    dfs(r);
    for (int i = 0; i < q; i++) {
        int u;
        cin >> u;
        cout << d[u] << "\n";
    }


    return 0;
}
