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
    int ecnt = 0;
    int ocnt = 0;
    
    vector<int> a(n);
    
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
        if (a[i] % 2 == 0)
            ecnt++;
        else
            ocnt++;
    }

    bool even = ecnt > ocnt;

    for (int i = 0; i < n; i++) {
        if (!even && a[i] % 2 == 0) {
            cout << i + 1 << endl;
            break;
        }
        if (even && a[i] % 2 == 1) {
            cout << i + 1 << endl;
            break;
        }
    }

    return 0;
}
