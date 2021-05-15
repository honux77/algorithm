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

bool visit[4];
double ans = 100.0;
vector<ii> v;

double dist(int a, int b) {
    int x1 = v[a].first;
    int y1 = v[a].second;
    int x2 = v[b].first;
    int y2 = v[b].second;
    return sqrt((x2 - x1) * (x2 - x1) + (y2 - y1) * (y2 - y1));
}

void dfs(int s, int lv, double tans) {
    //cerr << s << ", " << lv << ", " << tans << endl;
    visit[s] = true;    
    if (lv == 3) {
        //cout << tans << endl;
        if (tans < ans) ans = tans;
        return;
    }

    for (int i = 0; i < 4; i++) {
        if (s == i || visit[i]) continue;
        dfs(i, lv + 1, tans + dist(s, i));
        visit[i] = false;
    }
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    for (int i = 0; i < 4; i++) {
        int x, y;
        cin >> x >> y;
        v.push_back({x, y});
    }

    dfs(0, 0, 0);
    cout << (int) ans << endl;
    return 0;
}
