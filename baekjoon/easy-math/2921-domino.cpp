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

int bcount(int n) {
    return 3 * n * (n + 1) / 2;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int n;
    cin >> n;
    int s = 0;
    for (int i = 1; i <= n; i++) {
        s += bcount(i);
    }

    cout << s << endl;
    return 0;
}
