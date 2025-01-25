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
    
    i64 n;
    cin >> n;

    n = abs(n);

    if (n % 2 == 0) {
        cout << -1 << endl;
        return 0;
    }

    i64 cnt = 0;
    i64 w = 1;
    while (n > 0)
    {
        n -= w;
        w *= 2;
        cnt++;
    }

    if (n == 0)
    {
        cout << cnt << endl;
     
    } else {
        cout << -1 << endl;
    }    
    return 0;
}
