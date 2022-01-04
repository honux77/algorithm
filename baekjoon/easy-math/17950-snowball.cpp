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

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    
    i64 h, x;
    i64 r = 1000000007;    
    cin >> h >> x;
    i64 d = 1;
    i64 ans = 0;

    for (int i = 0; i < h; i++) {
        i64 t;
        cin >> t;
        d = (d * x) % r;
        ans = (ans + t * d) % r;        
    }
    cout << ans << "\n";
    return 0;
}
