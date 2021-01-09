#include <cstdio>
#include <iostream>
#include <vector>
#include <algorithm>
#include <map>

using namespace std;
using ull = long long int;

const int INF = 87654321;

int d[2001];

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int n, m;
    cin >> n >> m;

    fill_n(d, 2001, INF);
    d[0] = 0;

    for (int i = 0; i < m; i++) {
        int cost, h;
        cin >> cost >> h;
        for (int j = 0; j + h <= 2000; j++) {
            if (d[j] == INF) continue;
            d[j + h] = min(d[j + h], d[j] + cost);
        }
    }

    int ans = INF;
    for (int i = n; i <= 2000; i++) {
        ans = min(d[i], ans);
    }
    
    cout << ans << endl;

    return 0;
}