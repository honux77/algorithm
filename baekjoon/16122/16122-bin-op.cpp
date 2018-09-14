//https://www.acmicpc.net/problem/16122

#include <iostream>
#include <vector>

#define INF 998244353
using ll = long long;

using namespace std;
vector <vector <ll> > d;
int n, m;

//get new
inline ll get(int r, int c){
    return d[r][c + n];
}

inline void set(int r, int c, ll v) {
    d[r][c + n] = v;
}

ll solve(int n, int m) {
    //cout << n << "," << m << ": " << get(n, m) << endl;

    if (get(n, m) == -1) {
        ll v = (solve(n - 1, -m) + solve(n - 1, -m - 1)) % INF;
        set(n, m, v);
    }
    return get(n, m);
};

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    
    cin >> n >> m;
    
   d.resize(n + 1, vector<ll>(2 * n + 1, -1));
    
    for (int i = -n; i <= n; i++) {
        set(0, i, 0);
    }
    set(0, 0, 1);
    ll ans = solve(n, m);
    cout << ans << endl;
    return 0;
}
