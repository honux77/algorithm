#include <cstdio>
#include <iostream>
#include <vector>
#include <algorithm>
#include <queue>

using namespace std;
using Pair = pair<int,int>;
using ull = long long int;


vector<Pair> edge[20001];
int d[20001];
const int INF = 0x0fffffff;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    
    int v, e, s;
    cin >> v >> e >> s;
    
    for (int i = 1; i <= v; i++) {
        d[i] = INF;
    }
    
    d[s] = 0;    

    for (int i = 0; i < v; i++) {
        int v1, v2, w;
        cin >> v1 >> v2 >> w;
        edge[v1].push_back({v2, w});
    }

    priority_queue<Pair, vector<Pair>, greater<Pair>> pq;

    for (int i = 0;i < e; i++) {

    }


    


    
    return 0;
}