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

int a[30001];

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int n, t;
    cin >> n >> t;
    int curr = 1;

    for (int i = 1; i < n; i++) {
        cin >> a[i];
    }

    while (t > curr) {        
        curr += a[curr];
    }

    if (t == curr) {
        cout << "YES\n";
    } else {
        cout << "NO\n";
    }
    return 0;
}
