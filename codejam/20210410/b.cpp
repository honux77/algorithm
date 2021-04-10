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
using i64 = unsigned long long int;
using ii = pair<int, int>;
using ii64 = pair<i64, i64>;

i64 ans;

void bts(vector<i64> &v, int k, i64 s, i64 p) {
    //cout << k << " " <<  s << " " << p;
    if (k == v.size()) {
        if (s == p) ans = max(ans, p);
        return;
    }
    bts(v, k + 1, s + v[k], p);
    bts(v, k + 1, s, p * v[k]);
    //bts(v, k + 1, s, p);
}

i64 solve() {
    ans = 0;
    int n;
    cin >> n;
    vector<i64> v;
    for (int i = 0; i < n; i++) {
        int n1, n2;
        cin >> n1 >> n2;
        for (int j = 0; j < n2; j++) v.push_back(n1);       
    }
    bts(v, 0, 0, 1);
    return ans;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int t;    
    cin >> t;
    for (int i = 1; i <= t; i++) {
        cout << "Case #" << i << ": " << solve() << "\n";
    }            

    return 0;
}
