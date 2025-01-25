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
    
    int n, k, m;
    cin >> n >> k >> m;
    vector<int> a(n);
    for (int i = 0; i < n; i++)
        cin >> a[i];
    
    for (int i = 0; i < m; i++)
    {
        int c;
        cin >> c;
        if (c > 1 ) {
            if (k > c) continue;
            else {
                k = c + 1 - k;
            }
        } else if (c < -1) {
            c = n + c + 1;
            if (k < c) continue;
            else {
                k = n +c - k;
            }
        } 
    }

    cout << k << endl;

    return 0;
}
