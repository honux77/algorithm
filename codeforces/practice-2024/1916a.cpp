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
    
    int t;
    cin >> t;
    while (t--) {
        int n, k;
        cin >> n >> k;               
        int r = 2023;
        bool ok = true;
        for (int i = 0; i < n; i++) {
            int x;
            cin >> x;
            if (r % x != 0) {
                ok = false;                
            } else {
                r /= x;
            }                           
        }

        if (!ok) {
            cout << "NO\n";
            continue;
        }

        cout << "YES\n";

        while (k > 1) {
            cout << "1 ";
            k--;
        }
        cout << r << "\n";
    }
}
