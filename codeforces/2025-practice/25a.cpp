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
    
    int n;
    cin >> n;
    vector<bool> a(n);
    
    for (int i = 0; i < n; i++)
    {
        int t;
        cin >> t;
        a[i] = t % 2 == 0;
    }

    bool even = false;
    if (a[0] == a[1]) even = a[0];
    else if (a[0] == a[2]) even = a[0];
    else even = a[1];

    int ans = 0;

    for (int i = 0; i < n; i++)
    {
        if (a[i] != even) {
            ans = i + 1;
            break;
        }
    }

    cout << ans << endl;    
    return 0;
}
