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

bool myless(ii a, ii b) {
    return a.first < b.first;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int s, n;
    cin >> s >> n;

    vector<ii> m(n);
    for (int i = 0; i < n; i++) {
        int a, b;
        cin >> a  >> b;
        m[i] = {a, b};
    }

    sort(m.begin(), m.end(), myless);
    
    for (auto &v : m) {
        //cerr << s << " " << v.first << " " << v.second << endl;
        if (s <= v.first) {
            cout << "NO\n";
            return 0;            
        } else {
            s += v.second;
        }
    }

    cout << "YES\n";
    return 0;
}
