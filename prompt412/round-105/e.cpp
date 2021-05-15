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

const int N = 10000000;
bool nprime[N + 1];

void init() {
    for (int i = 2; i <= N; i++) {        
        if (nprime[i]) continue;
        for (int j = i * 2; j <= N; j += i) {
            nprime[j] = true;
        }
    }
}

int pcount(int n, int m) {
    int ans = 0;
    for (int i = n; i <= m; i++) {
        if (!nprime[i]) ans++;
    }
    return ans;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    init();

    int n, m;
    while (cin >> n >> m) {
        cout << pcount(n, m) << "\n\n";
    }   
    
    return 0;
}
