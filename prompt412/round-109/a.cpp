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

vector <ii> a;
set<ii> crd;

inline bool find(int x, int y) {
    return crd.find({x, y}) != crd.end();
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int n, dx, dy;
    cin >> n >> dx >> dy;
    int cnt = 0;

    for (int i = 0; i < n; i++) {
        int x, y;
        cin >> x >> y;
        a.push_back({x, y});
        crd.insert({x, y});
    }

    for (auto &p: a) {
        auto [x, y] = p;
        auto const &zz = crd.end();
        if (find(x + dx, y) && find(x + dx, y + dy) && find(x, y + dy)) cnt++;
    }
    cout << cnt << endl;
    return 0;
}
