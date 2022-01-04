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

int a[52];

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int l, s, e, n;
    cin >> l;
    for (int i = 1; i <= l; i++) {
        cin >> a[i];
    }

    cin >> n;

    sort(a + 1, a + l + 1);
    a[l + 1] = a[l] + 1;

    for (int i = 0; i <= l; i++) {
        if (a[i] == n) {
            cout << "0\n";
            return 0;
        }

        if (a[i] < n && n < a[i + 1]) {
            s = a[i];
            e = a[i + 1];
            break;
        }
    }

    cout << (n - s) * (e - n) - 1 << "\n";
    return 0;
}
